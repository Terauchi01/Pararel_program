#include <chrono>
#include <iostream>
using namespace std;
// /* execute with 4 processes */
// #define N 4
int N = 1500;
int main(int argc, char **argv) {
  int matA[1][N];
  int matB[N][N];
  int matC[1][N];
  int size, rank;
  int i, j, k;
  for (i = 0; i < N; i++) {
    matA[0][i] = 1;
  }
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      matB[i][j] = 1;
    }
  }
  auto start = chrono::high_resolution_clock::now();
  for (i = 0; i < 1; i++) {
    for (j = 0; j < N; j++) {
      int v = 0;
      for (k = 0; k < N; k++) {
        v += matA[i][k] * matB[k][j];
      }
      matC[i][j] = v;
    }
  }
  auto end = chrono::high_resolution_clock::now();
  auto duration =
      chrono::duration_cast<chrono::microseconds>(end - start).count();
  cout << "Execution time: " << duration << " microseconds" << endl;
  return 0;
}