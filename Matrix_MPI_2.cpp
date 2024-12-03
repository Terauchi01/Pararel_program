#include <mpi.h>
#include <stdio.h>
/* execute with 4 processes */
#define N 4
int matA[1][4];
int matB[4][1];
int matC[1][4];
int buffer[4][1];
int main(int argc, char **argv) {
  int size, rank;
  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &size);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  /* initialization: matA = ones(1, 4), matB = ones(4, 1) */
  {
    int i, j;
    for (i = 0; i < 4; i++) {
      matA[0][i] = 1;
    }
    for (i = 0; i < 4; i++) {
      matB[i][0] = 1;
    }
  }
  {
    int loop, i, j, k;
    MPI_Request reqs, reqr;
    for (loop = 0; loop < 4; loop++) {
      /* computation */
      for (i = 0; i < 1; i++) {
        for (j = 0; j < 1; j++) {
          int v = 0;
          for (k = 0; k < 4; k++) {
            v += matA[i][k] * matB[k][j];
          }
          matC[i][(rank + loop) % N] = v;
        }
      }
      /* communication */
      MPI_Isend(matB, 4, MPI_INT, (rank + N - 1) % N, 0, MPI_COMM_WORLD, &reqs);
      MPI_Irecv(buffer, 4, MPI_INT, (rank + 1) % N, 0, MPI_COMM_WORLD, &reqr);
      MPI_Wait(&reqs, MPI_STATUS_IGNORE);
      MPI_Wait(&reqr, MPI_STATUS_IGNORE);
      for (i = 0; i < 4; i++) {
        for (j = 0; j < 1; j++) {
          matB[i][j] = buffer[i][j];
        }
      }
    }
  }
  MPI_Finalize();
  return 0;
}