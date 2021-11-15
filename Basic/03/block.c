#include <stdio.h>
#define FALSE 0
#define TRUE 1
typedef int BOOL;

int _iAge = 0; // 전역변수 
extern int g_iAge = 0; // 다른파일에서 선언해 놓은 변수를 쓰겠다.

static int Counter() {
  static int iCount = 0;
  return iCount++;
}

int main() {
  BOOL bAssigned = FALSE;
  
  for(int i = 0; i < 3; i++) {
    int iAge; // 지역변수, local variable

    if(bAssigned == FALSE) {
      iAge = 10;
      bAssigned = TRUE;
    }

    printf(" %d", iAge);
  }

  return 0;
}