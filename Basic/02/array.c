#include <stdio.h>

int main() {
  int iScore[10/*생략가능*/] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  int iResult = 100;

  iScore[0] = 10;
  iScore[9] = 90;
  iResult = iScore[0] + iScore[9];
  
  int iValue[2][3] = {{11, 12, 13}, {14, 15, 16}};
  iValue[0][0] = 100;
  iValue[0][1] = 101;

  char cName[] = {'K', 'i', 'm'};
  return 0;
}