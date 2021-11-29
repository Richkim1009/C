#include <stdio.h>
#include <stdlib.h>
typedef const char* PCSTR;
typedef char* PSTR;

PCSTR _pszSentence = "Dynamic Memory Allocation in C by professional";

typedef struct _PERSONINFO {
  char szName[10];
  char cSex;
  char iAge;
  char szAddress[64];
} PERSONINFO, * PPERSONINFO;

int main() {
  PSTR pszMem;
  int iMemSize;

  iMemSize = strlen(_pszSentence) + 1;
  //pszMem = (PSTR) malloc(iMemSize);
  pszMem = (PSTR)calloc(iMemSize, 1);
  memset(pszMem, 0, iMemSize);

  free(pszMem);

  PERSONINFO myFriend[2] = {{"홍길동", 'M', 22, "대한민국 서울"}, 
                            {"제임스", 'M', 23, "미국 뉴욕"}};

  PPERSONINFO pWorkingInfo = (PPERSONINFO) malloc(sizeof(myFriend));

  memcpy(pWorkingInfo, myFriend, sizeof(myFriend));
  
  
  return 0;
}