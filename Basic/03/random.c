#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10

int main() {
  srand(time(NULL));
  int iRandomNumber;
  for(int i = 0; i < ARRAY_SIZE; i++) {
    iRandomNumber = rand() % ARRAY_SIZE;
    printf("%d ", iRandomNumber);
  }

  printf("%d", rand());
  
  return 0;
}