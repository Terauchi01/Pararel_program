#include <mpi.h>
#include <iostream>
#include <vector>
#include <random>
using namespace std;

int main(int argc, char **argv) {
  MPI_Init(&argc, &argv);

  int rank, size;
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Comm_size(MPI_COMM_WORLD, &size);

  if (argc < 4) {
    cerr << "Usage: " << argv[0]
         << " <N> <K> <output_file>" << endl;
    MPI_Finalize();
    return 1;
  }

  int N = atoi(argv[1]);
  int K = atoi(argv[2]);
  string output_file = argv[3];

  // 行列の初期化
  vector<vector<int>> matA(N, vector<int>(K, 1));       // 全て1に初期化
  vector<vector<int>> matB(K, vector<int>(N, 1)); // ランク依存で初期化
  vector<vector<int>> matC(N, vector<int>(N, 0));       // 結果行列
  int seed = 0;
  mt19937 engine(seed);
  uniform_int_distribution<int> dist(0, 100);

  // 初期化: matA = 0からN-1, matB = i * N + j
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < K; j++) {
      matA[i][j] = dist(engine);
    }
  }
  for (int i = 0; i < K; i++) {
    for (int j = 0; j < N; j++) {
      matB[i][j] = dist(engine);  // ランダム値で初期化
    }
  }

  // 部分行列の計算
  int rows_per_process = N / size;
  int extra_rows = N % size;
  int start_row = rank * rows_per_process + min(rank, extra_rows);
  int end_row = start_row + rows_per_process + (rank < extra_rows ? 1 : 0);

  vector<vector<int>> local_C(end_row - start_row, vector<int>(N, 0));

  double start_time = MPI_Wtime();

  for (int i = start_row; i < end_row; ++i) {
    for (int j = 0; j < N; ++j) {
      for (int k = 0; k < K; ++k) {
        local_C[i - start_row][j] += matA[i][k] * matB[k][j];
      }
    }
  }

  // 各プロセスの結果をランク0に集める
  if (rank == 0) {
    // ランク0の結果を直接 matC にコピー
    for (int i = 0; i < end_row - start_row; ++i) {
      matC[start_row + i] = local_C[i];
    }

    // 他のプロセスから結果を受信
    for (int p = 1; p < size; ++p) {
      int recv_start_row = p * rows_per_process + min(p, extra_rows);
      int recv_end_row =
          recv_start_row + rows_per_process + (p < extra_rows ? 1 : 0);
      for (int i = recv_start_row; i < recv_end_row; ++i) {
        MPI_Recv(matC[i].data(), N, MPI_INT, p, 0, MPI_COMM_WORLD,
                 MPI_STATUS_IGNORE);
      }
    }
  } else {
    // ランク0に部分結果を送信
    for (int i = 0; i < local_C.size(); ++i) {
      MPI_Send(local_C[i].data(), N, MPI_INT, 0, 0, MPI_COMM_WORLD);
    }
  }

  double end_time = MPI_Wtime();

  if (rank == 0) {
    cout << "Execution time: " << end_time - start_time << " seconds" << endl;
    cout << "Result matrix:" << endl;
    // for (int i = 0; i < N; ++i) {
    //   for (int j = 0; j < N; ++j) {
    //     cout << matC[i][j] << " ";
    //   }
    //   cout << endl;
    // }
  }

  MPI_Finalize();
  return 0;
}
