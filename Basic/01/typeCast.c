#include <stdio.h>

int main() {
  // 헝가리안 노테이션
  int iProductSerialNo = 65539;
  short sMachineSerialNo;

  sMachineSerialNo = (short/*명시적 타입캐스팅*/)iProductSerialNo;
  // bool타입은 사실 int 이다.
  
  
  return 0;
}