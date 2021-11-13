#include <stdio.h>
// 사용자 정의 헤더파일은 ""로 감싸 주어야 한다.
#include "Loop.h"



int main() {
  int i, iValue[100];

  for(i = 0; i < 100; i++) {
    iValue[i] = i;
    printf("%d ", iValue[i]);
  }

  while(i = 100/*할당문 가능*/) {
    iValue[i] = i++;
  }

  do {
    iValue[i] = --i;
  }while(TRUE);

  if(10 < i && i < 20)
    goto TEEN_AGER; // goto문은 가급적 사용을 자제 한다.
  
TEEN_AGER: 
  int i = 0;
  if(i == 0) {
    printf("$$");
  }
  return 0;
}