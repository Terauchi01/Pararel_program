#include <Eigen/Dense>
#include <iostream>

int main() {
  // 行列の定義
  Eigen::MatrixXd A(4, 4);
  A << 4, -2, 1, 3, 3, 6, 2, 4, 3, 3, 7, 5, 4, 5, 8, 6;

  std::cout << "Original Matrix A:" << std::endl;
  std::cout << A << std::endl;

  // 2x2のブロックでLU分解を実行
  int blockSize = 2;
  Eigen::FullPivLU<Eigen::MatrixXd> lu_decomp(A);
  Eigen::MatrixXd L = lu_decomp.matrixLU();
  //   Eigen::MatrixXd U = lu_decomp.matrixU();

  std::cout << "L Matrix:" << std::endl;
  std::cout << L << std::endl;

  //   std::cout << "U Matrix:" << std::endl;
  //   std::cout << U << std::endl;

  return 0;
}
