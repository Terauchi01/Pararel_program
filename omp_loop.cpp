#include <omp.h>
#include <stdio.h>
#define N 10000
int main() {
  int i, s = 0, localsum[4] = {0};
  omp_set_num_threads(4);
#pragma omp parallel for
  for (i = 0; i < N; i++) {
    localsum[omp_get_thread_num()] += i;
  }
#pragma omp parallel
  {
#pragma omp master
    {
      for (i = 0; i < omp_get_num_threads(); i++) {
        printf("localsum[%d] = %d\n", i, localsum[i]);
        s += localsum[i];
      }
    }
  }
  printf("global sum = %d\n", s);
  return 0;
}