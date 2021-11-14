#include <stdio.h>
#include "Loop.h"
// return_type FunctionName (parameters)
typedef int BOOL;
#define ARRAY_SIZE 10

BOOL IsLeftLarger(int, int); // prototype


int main() {
  int iValues[] = {10, 0, 30, 90, 40, 20, 80, 70, 60, 50};

  for (int i = 0; i < ARRAY_SIZE - 1; i++) {
    for(int j = 0; j < ARRAY_SIZE - 1 - i; j++) {
      if(IsLeftLarger (iValues[i], iValues[i + 1])) {
        int iTemp = iValues[i];
        iValues[i] = iValues[i + 1];
        iValues[i + 1] = iTemp;
      }
    }
  }

  for(int i = 0; i < ARRAY_SIZE; ++i) {
    printf("%d ", iValues[i]);
  }
}

BOOL IsLeftLarger(int iLeftValue, int iRightValue) {
  // if (iLeftValue > iRightValue)
  //   return (TRUE);
  // return FALSE;

  return (iLeftValue > iRightValue) ? TRUE : FALSE;
} 