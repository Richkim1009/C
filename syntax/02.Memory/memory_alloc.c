#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1 = 20;
  int *numPtr1;

  numPtr1 = &num1; // stack에 생성
  int *numPtr2;
  numPtr2 = malloc(sizeof(int)); // heap에 생성

  printf("%p\n", numPtr1);
  printf("%p\n", numPtr2);

  free(numPtr2);
}