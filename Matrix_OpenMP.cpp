#include <omp.h>

#include <chrono>
#include <iostream>
using namespace std;
// /* execute with 4 processes */
// #define N 4
int N = 2000;
int main(int argc, char **argv) {
  vector<int> matA(N, 0);
  vector<vector<int>> matB(N, vector<int>(N, 0));
  vector<int> matC(N, 0);
  int size, rank;
  int i, j, k;
  for (i = 0; i < N; i++) {
    matA[i] = 1;
  }
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      matB[i][j] = 1;
    }
  }
  int s, d;
  omp_set_num_threads(8);
  auto start = chrono::high_resolution_clock::now();
#pragma omp parallel for private(d) reduction(+ : s)
  //   for (i = 0; i < 1; i++) {
  for (j = 0; j < N; j++) {
    int v = 0;
    for (k = 0; k < N; k++) {
      d = matA[k] * matB[k][j];
      s += d;
    }
    matC[j] = s;
  }
  //   }
  auto end = chrono::high_resolution_clock::now();
  auto duration =
      chrono::duration_cast<chrono::microseconds>(end - start).count();
  cout << "Execution time: " << duration << " microseconds" << endl;
  return 0;
}