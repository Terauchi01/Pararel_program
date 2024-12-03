#include <Eigen/Dense>
#include <fstream>
#include <iostream>
#include <random>
using namespace Eigen;
using namespace std;

int main(int argc, char** argv) {
  // コマンドライン引数のチェック
  if (argc < 3) {
    cerr << "Usage: " << argv[0] << " <matrix_size> <output_filename>" << endl;
    return 1;
  }

  int N = atoi(argv[1]);
  string output_filename = argv[2];

  // 行列の初期化
  MatrixXd A(1, N), B(N, N), C(1, N);

  // ランダム数生成
  int seed = 0;
  mt19937 engine(seed);
  uniform_int_distribution<int> dist(0, 100);

  // A, B 行列の初期化
  for (int i = 0; i < N; i++) {
    A(0, i) = dist(engine);
    for (int j = 0; j < N; j++) {
      B(i, j) = dist(engine);
    }
  }

  // 行列積
  C = A * B;

  // 計算結果を出力
  
  ofstream outfile(output_filename);
  if (!outfile) {
    cerr << "Error: Could not open file " << output_filename << " for writing."
         << endl;
    return 1;
  }
  outfile << C << "\n";

  outfile.close();

  return 0;
}
