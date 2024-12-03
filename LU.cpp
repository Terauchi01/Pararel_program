#include <iostream>
#include <vector>

// 行列の表示関数
void printMatrix(const std::vector<std::vector<double>>& mat) {
  for (const auto& row : mat) {
    for (double elem : row) {
      std::cout << elem << " ";
    }
    std::cout << std::endl;
  }
}

// LU分解関数
void LUDecompose(std::vector<std::vector<double>>& A,
                 std::vector<std::vector<double>>& L,
                 std::vector<std::vector<double>>& U) {
  int n = A.size();

  // 初期化：Lは単位行列、UはAのコピー
  L = std::vector<std::vector<double>>(n, std::vector<double>(n, 0));
  U = std::vector<std::vector<double>>(n, std::vector<double>(n, 0));

  for (int i = 0; i < n; i++) {
    L[i][i] = 1;  // Lの対角成分は1

    for (int j = i; j < n; j++) {
      U[i][j] = A[i][j];  // Uの上三角部分をコピー
    }

    for (int j = i + 1; j < n; j++) {
      L[j][i] = A[j][i] / U[i][i];  // Lの下三角部分を計算
      for (int k = i; k < n; k++) {
        A[j][k] -= L[j][i] * U[i][k];  // Aを更新
      }
    }
  }
}

int main() {
  // 4x4行列の例
  std::vector<std::vector<double>> A = {
      {4, -2, 1, 3}, {3, 6, 2, 4}, {3, 3, 7, 5}, {4, 5, 8, 6}};

  std::vector<std::vector<double>> L, U;

  std::cout << "Original Matrix A:" << std::endl;
  printMatrix(A);

  // LU分解の実行
  LUDecompose(A, L, U);

  // L行列の出力
  std::cout << "\nL Matrix:" << std::endl;
  printMatrix(L);

  // U行列の出力
  std::cout << "\nU Matrix:" << std::endl;
  printMatrix(U);

  return 0;
}
