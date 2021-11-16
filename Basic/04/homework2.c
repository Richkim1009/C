#include <stdio.h>

void CalcMatrix(int* p1, int* p2, int* p3) {
  *p3 = *p1 + *p2;
}

int main() {
  int arr1[2][2] = {1,2,3,4};
  int arr2[2][2] = {5,6,7,8};
  int arr3[2][2];
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      CalcMatrix(&arr1[i][j], &arr2[i][j], &arr3[i][j]);
    }
  }

  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      printf("%d ", arr3[i][j]);
    }
    printf("\n");
  }
}