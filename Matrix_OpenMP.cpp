#include <omp.h>

#include <chrono>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <random>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  // コマンドライン引数のチェック
  if (argc < 4) {
    cerr << "Usage: " << argv[0] << " <K> <N> <output_filename>" << endl;
    return 1;
  }

  int N = atoi(argv[1]);
  int K = atoi(argv[2]);
  string s = argv[3];

  // 行列の定義
  vector<vector<int>> matA(N, vector<int>(K, 0));
  vector<vector<int>> matB(K, vector<int>(N, 0));
  vector<vector<int>> matC(N, vector<int>(N, 0));

  // ランダム数生成
  int seed = 0;
  mt19937 engine(seed);
  uniform_int_distribution<int> dist(0, 100);

  // A, B 行列の初期化
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
  omp_set_num_threads(num_threads);
  int range = (N) / num_threads;
  int remainder = (N) % num_threads;

  auto start = chrono::high_resolution_clock::now();
  vector<vector<int>> local_C(N, vector<int>(N, 0));
  // #pragma omp parallel for private( \
//         local_C)  // privateでローカル変数local_Cを各スレッドに割り当て
  //   for (int i = 0; i < N; i++) {
  //     // ローカル行列の計算
  //     vector<vector<int>> local_C(
  //         N, vector<int>(N, 0));  // 各スレッドでローカルの行列Cを確保

  //     for (int k = 0; k < K; k++) {
  //       for (int j = 0; j < N; j++) {
  //         local_C[i][j] += matA[i][k] * matB[k][j];  // 行列計算
  //       }
  //     }

  // // 各スレッドで計算した結果をmatCに集約
  // #pragma omp critical
  //     {
  //       for (int j = 0; j < N; j++) {
  //         matC[i][j] += local_C[i][j];  // 結果を加算
  //       }
  //     }
  //   }

#pragma omp parallel
  {
    int my_thread_id = omp_get_thread_num();

    // 最後のスレッドは余りを含めた範囲を担当
    int ps_start = my_thread_id * range + std::min(my_thread_id, remainder);
    int ps_end =
        (my_thread_id + 1) * range + std::min(my_thread_id + 1, remainder);

    // ローカル行列の計算
    vector<vector<int>> local_C(N, vector<int>(N, 0));

    // 行列計算
    for (int i = ps_start; i < ps_end; i++) {
      for (int k = 0; k < K; k++) {
        int a = matA[i][k];
        #pragma omp simd
        for (int j = 0; j < N; j++) {
          local_C[i][j] += a * matB[k][j];
        }
      }
    }

    // 各スレッドで計算した結果を matC に集約する
#pragma omp critical
    {
      for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
          matC[i][j] += local_C[i][j];
        }
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

  // 行列Cの出力
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      outfile << matC[i][j];
      if (j != N - 1) {
        outfile << " ";
      } else if (i != N - 1) {
        outfile << endl;
      }
    }
  }

  outfile.close();

  return 0;
}
