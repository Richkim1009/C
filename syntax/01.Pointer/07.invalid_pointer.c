#include <stdio.h>

int main(void) {
  // 잘못된 메모리 주소
  int *numPtr = 0x100;
  // 특정한 프로그램에선 직접 주소를 넣는것 가능
  int *numPtr2 = 0x00CCFC2C;
  
  printf("%d\n", *numPtr2);
  
  return 0;
}