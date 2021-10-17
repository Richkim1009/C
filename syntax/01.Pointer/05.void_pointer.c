#include <stdio.h>

int main() {
  int num1 = 10;
  char c1 = 'a';
  int *numPtr1 = &num1;
  char *cPtr1 = &c1;

  // 어떤 모든 타입을 저장할수있는 void!
  void *ptr;
  ptr = numPtr1;
  ptr = cPtr1;

  numPtr1 = ptr;
  cPtr1 = ptr;

  // void 포인터는 사용 불가
  // printf("%d\n", *ptr);

  
  return 0;
}