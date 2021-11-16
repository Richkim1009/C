// 포인터는 주소를 담고 있는 변수
// int * ptr; 포인터 선언
// 여기서 int는 가리키고 있는 변수의 타입이다.

#include <stdio.h>

int main() {
  int iAge = 20;
  int* piAge = &iAge;
  int* piAge2;
  short* psAge;

  // void포인터는 형변환이 필요 없기 때문에 공용포인터라고도 불린다.
  void* pVoid = NULL;
  pVoid = piAge;

  psAge = (short*)piAge;

  piAge2 = piAge;

  *piAge = *piAge + 10;
  printf("\n *piAge = %d\n", *piAge);

  iAge += 10;
  printf("\n iAge = %d", iAge);

  return 0;
}