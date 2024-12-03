#include <omp.h>

#include <chrono>
#include <cmath>  // for std::abs
#include <fstream>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
using namespace std;

// ヤコビ法の関数
void jacobiMethod(const vector<vector<double>>& A, const vector<double>& b,
                  vector<double>& x, int maxIterations, double tolerance) {
  int n = A.size();              // 行列のサイズ
  vector<double> x_new(n, 0.0);  // 新しいxを格納するためのベクトル
  auto start = chrono::high_resolution_clock::now();
  int num_threads = omp_get_max_threads();
  //   int rows_per_process = N / num_threads;
  //   int extra_rows = N % num_threads;
  omp_set_num_threads(num_threads);
  for (int iter = 0; iter < maxIterations; iter++) {
    // ヤコビ法の反復計算
    double error = 0.0;
#pragma omp parallel for reduction(+ : error)
    for (int i = 0; i < n; i++) {
      double A_i = A[i][i];
      double sigma = 0.0;

      // i行目の他の列の計算
      for (int j = 0; j < n; j++) {
        if (i == j) {
          continue;
        }
        sigma += A[i][j] * x[j];
      }

      // 新しいx[i]の計算
      x_new[i] = (b[i] - sigma) / A_i;

      error += abs(x_new[i] - x[i]);
    }
    if (error < tolerance) {
      cout << "Converged after " << iter + 1 << " iterations." << endl;
      x = x_new;  // 最終的な解を更新
      return;
    }

    x = x_new;  // 解を更新
  }
  cout << "Reached maximum iterations without full convergence." << endl;
  auto end = chrono::high_resolution_clock::now();
  auto duration =
      chrono::duration_cast<chrono::milliseconds>(end - start).count();

  cout << "Execution time: " << duration << " milliseconds" << endl;
}

void writeToFile(const vector<vector<double>>& A, const vector<double>& B,
                 const string& filename) {
  ofstream outFile(filename);
  if (!outFile.is_open()) {
    cerr << "Error: Could not open file " << filename << " for writing."
         << endl;
    return;
  }

  // 行列Aを書き出す
  outFile << A.size() << " " << A[0].size()
          << endl;  // 行列サイズを最初に書き出し
  for (const auto& row : A) {
    for (const auto& value : row) {
      outFile << fixed << setprecision(2) << value << " ";  // 小数点以下2桁
    }
    outFile << endl;
  }

  // ベクトルBを書き出す
  outFile << B.size() << endl;  // ベクトルサイズを最初に書き出し
  for (const auto& value : B) {
    outFile << fixed << setprecision(2) << value << " ";
  }
  outFile << endl;

  outFile.close();
}

int main(int argc, char** argv) {
  if (argc < 2) {
    cerr << "Usage: " << argv[0] << " <matrix size>" << endl;
    return 1;
  }
  int N = atoi(argv[1]);
  // 問題の設定
  vector<vector<double>> A(N, vector<double>(N, 0));  // 対角優位な行列
  vector<double> B(N, 0);                             // 定数ベクトル
  vector<double> C(N, 0);                             // 初期解
  int seed = 0;
  mt19937 engine(seed);
  uniform_int_distribution<int> dist(10, 100);
  uniform_int_distribution<int> dist2(0, 10);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) {
        A[i][j] = dist(engine);  // 対角成分を大きくする
      } else {
        A[i][j] = dist2(engine);  // 対角以外を小さくする
      }
    }
    B[i] = dist(engine);  // 定数ベクトルも適当に設定
  }
  writeToFile(A, B, "./matrix_data.txt");

  int maxIterations = 100;  // 最大反復回数
  double tolerance = 1e-6;  // 許容誤差

  // ヤコビ法の実行
  jacobiMethod(A, B, C, maxIterations, tolerance);

  // 解の表示
  //   cout << "Solution: ";
  //   for (double ci : C) {
  //     cout << ci << " ";
  //   }
  //   cout << endl;

  return 0;
}
