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

  // 行列の初期化
  vector<vector<int>> matA(1, vector<int>(N, 0));
  vector<vector<int>> matB(N, vector<int>(N, 0));
  vector<vector<int>> matC(1, vector<int>(N, 0));

  // ランダム数生成
  int seed = 0;
  mt19937 engine(seed);
  uniform_int_distribution<int> dist(0, 100);

  for (int i = 0; i < N; i++) {
    matA[0][i] = dist(engine);
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      matB[i][j] = dist(engine);
    }
  }

  // 実行時間計測開始
  auto start = chrono::high_resolution_clock::now();

  // 行列計算
  for (int j = 0; j < N * N; j++) {
    int row = j / N;  // 行番号
    int col = j % N;  // 列番号

    matC[0][row] += matA[0][col] * matB[col][row];
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
    outfile << matC[0][j] << " ";
  }
  outfile << endl;
  outfile.close();

  return 0;
}
