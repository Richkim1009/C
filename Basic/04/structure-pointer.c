#include <stdio.h>
#include <time.h>
typedef int time_t;

// -> 구조체 포인터를 접근할때 쓰인다.

static void fnTimeFunction() {
  time_t currTime;
  struct tm* ptm;

  currTime = time(NULL);
  ptm = localtime(&currTime);

}

int main() {

  
  return 0;
}