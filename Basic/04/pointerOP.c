#include <stdio.h>
#define ARRAY_SIZE 10
void PrintArray(int* , int);
void PrintArray_Offset(int*, int);

int main() {
  int iValue[ARRAY_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  PrintArray(iValue, ARRAY_SIZE);
  
  return 0;
}

void PrintArray(int* piValue, int iArraySize) {
  for (int i = 0; i < iArraySize; i++) {
    printf("%d", *piValue++);
    // *piValue를 먼저 실행하고 piValue(논리적 주소값을 하나 증가 시킨다.)
  }
}

void PrintArray_Offset(int* piValues, int iArraySize) {
  for(int i = 0; i < iArraySize; i++) {
    printf("%d", *(piValues + i));
  }
} 

void PrintArray_Subscript(int* piValues, int iArraySize) {
  for(int i = 0;i < iArraySize; i++) {
    printf("%d", piValues[i]);
  }
}