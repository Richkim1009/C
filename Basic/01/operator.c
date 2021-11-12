#include <stdio.h>

int main() {
  // 좌변에 나오면 변수 장소에 값을 집어넣는 역할
  // 우변에 나오면 변수 장소에서 값을 꺼내오는 역할

  int x = 0, z = 0, y = 0;
  x = 5 % 3;  

  printf("x = %d\n", x);
  
  x = x + 1;
  x += 1;
  // increment operator
  x++; // 후위: 전달하고 더함
  ++x; // 전위: 바로 더함

  x = 10;
  y = (x++) + (x++);
  printf("x: %d\ny: %d\n", x, y);

  return 0;
}