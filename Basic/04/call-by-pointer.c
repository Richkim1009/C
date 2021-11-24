#include <stdio.h>

// call by value 값이 복사된다./
static void Swap(int iParam1, int iParam2) {
  int iTmp = iParam1;
  iParam1 = iParam2;
  iParam2 = iTmp;
}

// call by adress 주소가 복사된다.
static void Swap2(int* iParam1, int* iParam2) {
  int iTmp = *iParam1;
  *iParam1 = *iParam2;
  *iParam2 = iTmp;
}

int main() {
  
  
  return 0;
}