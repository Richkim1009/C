#include <stdio.h>

int main() {
  int x = 10, y;
  if(x > 2) {
    printf("\n x 가 2보다큽니다\n");
  } else {
    y = 100;
  }

  switch(x) {
    case 10:
      printf("%d\n",x);
      break;
    case 20:
      printf("%d\n",x);
      break;
    case 30: // 연달아 쓰는 것은 or이다.
    case 40:
      printf("%d\n",x);
      break;
    default:
      printf("not\n");
  }
  
  
  return 0;
}