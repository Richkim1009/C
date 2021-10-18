#include <stdio.h>

int main() {
  int *numPtr1 = NULL;
  printf("%p\n", numPtr1);

  // 이런식으로 사용함
  if(ptr == NULL) {
    ptr = malloc(1024);
  }

  free(numPtr1);
}