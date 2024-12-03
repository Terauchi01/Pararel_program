#include <omp.h>

#include <chrono>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <random>
#include <vector>
using namespace std;

int main(int argc, char **argv) {
  // コマンドライン引数のチェック
  if (argc < 3) {
    cerr << "Usage: " << argv[0] << " <matrix_size> <output_filename>" << endl;
    return 1;
  }

  int N = atoi(argv[1]);
  string s = argv[2];
  bool flg = true;

  // 行列の初期化
  vector<int> matA(N, 0);
  vector<vector<int>> matB(N, vector<int>(N, 0));
  vector<int> matC(N, 0);

  // ランダム数生成
  int seed = 0;
  mt19937 engine(seed);
  uniform_int_distribution<int> dist(0, 100);

  for (int i = 0; i < N; i++) {
    matA[i] = dist(engine);
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      matB[i][j] = dist(engine);
    }
  }

  // 実行時間計測開始

  int num_threads = omp_get_max_threads();
  int rows_per_process = N / num_threads;
  int extra_rows = N % num_threads;
  omp_set_num_threads(num_threads);
  auto start = chrono::high_resolution_clock::now();

  if (flg) {
    vector<int> local_matC(N, 0);  // 各スレッドの部分結果を保存

#pragma omp parallel
    {
      int my_thread_id = omp_get_thread_num();

      int start_row =
          my_thread_id * rows_per_process + min(my_thread_id, extra_rows);
      int end_row =
          start_row + rows_per_process + (my_thread_id < extra_rows ? 1 : 0);

      for (int row = start_row; row < end_row; row++) {
        for (int col = 0; col < N; col++) {
          local_matC[row] += matA[col] * matB[col][row];
        }
      }

#pragma omp critical
      for (int row = start_row; row < end_row; row++) {
        matC[row] += local_matC[row];
      }
    }
  } else {
#pragma omp parallel for
    for (int j = 0; j < N; j++) {
      int s = 0;
      for (int k = 0; k < N; k++) {
        s += matA[k] * matB[k][j];
      }
      matC[j] = s;
    }
  }

  // 実行時間計測終了
  auto end = chrono::high_resolution_clock::now();
  auto duration =
      chrono::duration_cast<chrono::milliseconds>(end - start).count();

  cout << "Execution time: " << duration << " milliseconds" << endl;

  // 出力ディレクトリの作成
  string output_dir = "./Matrix_OpenMP_log";
  if (!filesystem::exists(output_dir)) {
    filesystem::create_directory(output_dir);
  }

  // ファイルに結果を保存
  ofstream outfile(output_dir + "/" + s);
  if (!outfile) {
    cerr << "Error opening file for execution time!" << endl;
    return 1;
  }

  for (int j = 0; j < N; j++) {
    outfile << matC[j] << " ";
  }
  outfile << endl;
  outfile.close();

  return 0;
}
