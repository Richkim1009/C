#include <stdio.h>
typedef int (*FPMATH) (int, int);
enum CalcMethod {ADD = 0, SUB, MUL, DIV, MOD};

int Add(int iValue1, int iValue2) {return (iValue1 + iValue2);}

int (*fpMath) (int, int) = Add;

FPMATH fpAddr = Add;

static void fnCal() {
  int iValue1 = 10, iValue2 = 20, iResult;

  iResult = (*fpMath)(iValue1, iValue2);
  iResult = (*fpAddr)(iValue1,iValue2);
  printf("%d\n", iResult);

}

