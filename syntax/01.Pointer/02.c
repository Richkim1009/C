#include <stdio.h>

int main() {
  // type *name; 포인터 변수 선언 방법
  // int * 는 pointer to int라 읽는다 
  int *numPtr;
  int num1 = 01;
  numPtr = &num1;

  printf("%p\n", numPtr);
  printf("%p\n", &num1);
}