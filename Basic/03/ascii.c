#include <stdio.h>
#include <locale.h>

int main() {
  char ch = 48;
  printf("%c, %d\n", ch, ch);

  unsigned short wHangeul = L'가'; // 유니코드는 대문자 L을 앞에 붙여 준다.
  // printf는 유니코드를 지원하지 않는다.
  // wprintf를 사용해야한다 
  setlocale (LC_ALL, "korean");
  wprintf();
  return 0;
}