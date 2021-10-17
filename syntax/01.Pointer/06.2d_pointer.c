#include <stdio.h>

int main(void) {
  int *numPtr1;
  // pointer to pointer to int
  int **numPtr2;
  int num1 = 10;

  numPtr1 = &num1;
  numPtr2 = &numPtr1;
  
  printf("%d\n", **numPtr2);
  return 0;
}