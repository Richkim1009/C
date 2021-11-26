#include <stdio.h>

int main() {
  const int iValue1 = 10;
  int const iValue2 = 20;

  // 가리키는 장소가 상수
  const int* piValue5 = &iValue1;
  // 포인터가 상수
  int* const piValue6 = &iValue2;
  return 0;
}