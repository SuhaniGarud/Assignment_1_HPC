#include<stdio.h>
#include<omp.h>

int main(){
  #pragma omp parallel
  {
    int i= omp_get_thread_num();
    printf("Hello World! from thread %d\n ", i);
  }
  return 0;
}
