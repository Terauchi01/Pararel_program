#include <math.h>
#include <omp.h>
#include <stdio.h>

#define N 3
#define MAX_ITER 100
#define TOL 1e-6

void jacobi(double A[N][N], double b[N], double x[N]) {
  double x_new[N];
  int iter = 0;
  double diff;

#pragma omp parallel
  {
    do {
      diff = 0.0;
#pragma omp for
      for (int i = 0; i < N; i++) {
        double sigma = 0.0;
        for (int j = 0; j < N; j++) {
          if (i != j) {
            sigma += A[i][j] * x[j];
          }
        }
        x_new[i] = (b[i] - sigma) / A[i][i];
      }

#pragma omp for reduction(+ : diff)
      for (int i = 0; i < N; i++) {
        diff += fabs(x_new[i] - x[i]);
        x[i] = x_new[i];
      }

      iter++;
    } while (diff > TOL && iter < MAX_ITER);
  }

  printf("Solution after %d iterations:\n", iter);
  for (int i = 0; i < N; i++) {
    printf("x[%d] = %.6f\n", i, x[i]);
  }
}

int main() {
  double A[N][N] = {{4, 1, 2}, {3, 5, 1}, {1, 1, 3}};
  double b[N] = {4, 7, 3};
  double x[N] = {0, 0, 0};  // 初期値

  jacobi(A, b, x);
  return 0;
}
