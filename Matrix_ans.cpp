#include <Eigen/Dense>
#include <fstream>
#include <iostream>
#include <random>
using namespace Eigen;
using namespace std;

int main(int argc, char** argv) {
  // コマンドライン引数のチェック
  if (argc < 4) {
    cerr << "Usage: " << argv[0] << " <K> <N> <output_filename>" << endl;
    return 1;
  }

  int K = atoi(argv[1]);             // Kのサイズ
  int N = atoi(argv[2]);             // Nのサイズ
  string output_filename = argv[3];  // 出力ファイル名

  // 行列の初期化
  MatrixXd A(K, N), B(N, K), C(K, K);

  // ランダム数生成
  int seed = 0;
  mt19937 engine(seed);
  uniform_int_distribution<int> dist(0, 100);

  // A, B 行列の初期化
  for (int i = 0; i < K; i++) {
    for (int j = 0; j < N; j++) {
      A(i, j) = dist(engine);  // A行列をランダムで初期化
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < K; j++) {
      B(i, j) = dist(engine);  // B行列をランダムで初期化
    }
  }

  // 行列積
  C = A * B;  // A * B の積を計算してCに格納

  // 計算結果を出力
  ofstream outfile(output_filename);
  if (!outfile) {
    cerr << "Error: Could not open file " << output_filename << " for writing."
         << endl;
    return 1;
  }

<<<<<<< Updated upstream
  outfile << C << " ";  // 計算結果の行列Cをファイルに書き込む
=======
  outfile << C << "\n";  // 計算結果の行列Cをファイルに書き込む
>>>>>>> Stashed changes

  outfile.close();

  return 0;
}
