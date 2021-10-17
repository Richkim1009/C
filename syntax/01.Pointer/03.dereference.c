#include <stdio.h>

int main() {
  int *numPtr;
  int num1 = 10;
  // pointer to int == adress of int
  numPtr = & num1;
  
  // 포인터 역참조
  printf("%d\n", *numPtr);

  // 값 저장
  *numPtr = 20;

  printf("%d\n", *numPtr);
  return 0;
}