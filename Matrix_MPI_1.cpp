#include <mpi.h>
#include <stdio.h>
/* execute with 4 processes */
#define N 4
int matA[1][4];
int matB[4][4];
int matC[1][4];
int main(int argc, char **argv) {
  int size, rank;
  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &size);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  /* initialization: matA = ones(1, 4), matB = ones(4, 4) */
  {
    int i, j;
    for (i = 0; i < 4; i++) {
      matA[0][i] = 1;
    }
    for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++) {
        matB[i][j] = 1;
      }
    }
  }
  {
    /* computation */
    int i, j, k;
    for (i = 0; i < 1; i++) {
      for (j = 0; j < 4; j++) {
        int v = 0;
        for (k = 0; k < 4; k++) {
          v += matA[i][k] * matB[k][j];
        }
        matC[i][j] = v;
      }
    }
  }
  MPI_Finalize();
  return 0;
}