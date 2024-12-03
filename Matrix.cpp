#include <chrono>
#include <filesystem>  // ディレクトリ作成に使用
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

  // ランダム数生成
  int seed = 0;
  mt19937 engine(seed);
  uniform_int_distribution<int> dist(0, 100);

  // 行列Aのランダムな値を設定
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < K; j++) {
      matA[i][j] = dist(engine);
    }
  }

  // 行列Bのランダムな値を設定
  for (int i = 0; i < K; i++) {
    for (int j = 0; j < N; j++) {
      matB[i][j] = dist(engine);
    }
  }

  // 実行時間計測開始
  auto start = chrono::high_resolution_clock::now();

  // 行列計算
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      int v = 0;
      for (int k = 0; k < K; k++) {
        v += matA[i][k] * matB[k][j];
      }
      matC[i][j] = v;
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
