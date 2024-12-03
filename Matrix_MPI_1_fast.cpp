#include <mpi.h>

#include <iostream>
#include <random>
#include <vector>
using namespace std;

/* execute with 4 processes */
int main(int argc, char **argv) {
  int size, rank;

  // コマンドライン引数のチェック
  if (argc < 4) {
    cerr << "Usage: " << argv[0]
         << " <matrix_size> <matrix_size> <output_filename>" << endl;
    return 1;
  }

  int N = atoi(argv[1]);
  int K = atoi(argv[2]);
  string s = argv[3];

  // 行列とベクトルの定義
  vector<vector<int>> matA(N, vector<int>(K, 0));
  vector<vector<int>> matB(K, vector<int>(N, 0));
  vector<vector<int>> matC(N, vector<int>(N, 0));

  // ランダムな初期化
  int seed = 0;
  mt19937 engine(seed);
  uniform_int_distribution<int> dist(0, 100);

  // 初期化: matA = 0からN-1, matB = i * N + j
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < K; j++) {
      matA[i][j] = 1;
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      matB[i][j] = 1;  // ランダム値で初期化
    }
  }
  int loop_max = N * N * N;

  // MPI初期化
  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &size);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Barrier(MPI_COMM_WORLD);  // 全プロセスを同期
  int *shared_matC;
  MPI_Win win;
  MPI_Win_allocate_shared(rank == 0 ? N * N * sizeof(int) : 0, sizeof(int),
                          MPI_INFO_NULL, MPI_COMM_WORLD, &shared_matC, &win);

  // 他のプロセスで共有メモリへのアクセスを設定
  if (rank != 0) {
    MPI_Aint size;
    int disp_unit;
    MPI_Win_shared_query(win, 0, &size, &disp_unit, &shared_matC);
  }

  // `matC` を0で初期化（プロセス0が初期化）
  if (rank == 0) {
    for (int i = 0; i < N * N; i++) {
      shared_matC[i] = 0;
    }
  }
  double start_time = MPI_Wtime();
  int rows_per_process = N * N * N / size;  // 基本の行数
  int extra_rows = N * N * N % size;        // 余剰行数
  int start_row = rank * rows_per_process + min(rank, extra_rows);
  int end_row = start_row + rows_per_process + (rank < extra_rows ? 1 : 0);

  int j = 0;
  int k = 0;
  int a = 0;
  for (int i = start_row; i < end_row; i++) {  // 行列Aの行をループ
    asm("start_label:");
    j = (i / N);
    a = j / N;
    k = i % N;
    j = j % N;
    shared_matC[(N * a) + k] += matA[a][k] * matB[k][j];
    asm("end_label:");
  }

  // int range = (N * N) / size;
  // int ps_start = rank * range;
  // int ps_end = (rank + 1) * range;

  // // 行列計算
  // for (int index = ps_start; index < ps_end; index++) {
  //   int i = index / N;
  //   int k = index % N;
  //   for (int j = 0; j < N; j++) {
  //     shared_matC[i * N + j] += matA[i][k] * matB[k][j];
  //   }
  // }

  // 計測終了
  MPI_Barrier(MPI_COMM_WORLD);  // 全プロセスを同期
  double end_time = MPI_Wtime();

  // 各プロセスの計算時間を出力
  double elapsed_time = end_time - start_time;
  cout << "Process " << rank << " execution time: " << elapsed_time
       << " seconds" << endl;

  // MPI終了
  // if (rank == 0) {
  //   for (int i = 0; i < 10; i++) {
  //     for (int j = 0; j < 10; j++) {
  //       cout << shared_matC[(i * N) + j] << " ";  // ランダム値で初期化
  //     }
  //     cout << endl;
  //   }
  // }
  MPI_Win_free(&win);
  MPI_Finalize();
  return 0;
}
