#include <stdio.h>
#include <search.h>

#define ARRAY_SIZE 10

int CompareTwoValue(const void* arg1, const void* arg2) {
  return (*(int*)arg1 - *((int*)arg2));
}

void fn_qsort() {
  int iValues[ARRAY_SIZE] = {10, 50, 30, 90, 40, 20, 80, 70, 60, 0};
  int* piSearched;
  int k;

  qsort(iValues, ARRAY_SIZE, sizeof(int), CompareTwoValue) ;
  /*void qsort(void* base, size_t number, size_t width,
    int (__cdecl * compare)(const void*, const void*));*/

  
}