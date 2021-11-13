#include <stdio.h>

int main() {
  printf("안녕하세요. 반갑습니다. \n");

  int x = 10, y = 20, z;
  z = x + y;
  printf("x = %d, y = %d, z = %d\n", x, y, z); // % formatter
  // \n new line

  scanf("%d %d %d", &x, &y, &z);

  printf("x = %d, y = %d, z = %d\n", x, y, z); 
}