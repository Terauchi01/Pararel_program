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

  // 行列の初期化

  // ランダム数生成
  int seed = 0;
  mt19937 engine(seed);
  uniform_int_distribution<int> dist(0, 100);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < K; j++) {
      matA[i][j] = dist(engine);
    }
  }
  for (int i = 0; i < K; i++) {
    for (int j = 0; j < N; j++) {
      matB[i][j] = dist(engine);
    }
  }

  // 実行時間計測開始

  int num_threads = omp_get_max_threads();
  int rows_per_process = N / num_threads;
  int extra_rows = N % num_threads;
  omp_set_num_threads(num_threads);

  vector<int> local_matC(N, 0);  // 各スレッドの部分結果を保存
  auto start = chrono::high_resolution_clock::now();

#pragma omp parallel
  {
    int my_thread_id = omp_get_thread_num();

    int range = (N * N) / num_threads;
    int ps_start = my_thread_id * range;
    int ps_end = (my_thread_id + 1) * range;

    // 行列計算
    for (int index = ps_start; index < ps_end; index++) {
      int i = index / N;
      int k = index % N;
      for (int j = 0; j < N; j++) {
        matC[i][j] += matA[i][k] * matB[k][j];
      }
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

  for (int i = 0; i < K; i++) {
    for (int j = 0; j < N; j++) {
      outfile << matB[i][j] << " ";
    }
  }

  outfile << endl;
  outfile.close();

  return 0;
}
