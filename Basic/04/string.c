#include <stdio.h>
#include <string.h>
#define NULL 0

void PrintString(const char* pszString) {
  while(*pszString != '\0') 
    printf("%c ", *pszString++);

  printf("\n");
}

int main() {
  char szName [] = {'G', 'i', 'm', ' ', 'G','y','u','n','g', ' ', 'W', 'o', 'o', 'n', NULL};
  char szName2 [] = "Gim Gyung Woon";
  const char* pszName = "Gim Gyung Woon__";
  char szMyName[256];
  PrintString(pszName);
  strcpy(szMyName, szMyName);
  // while(*pszDestination++ = *pszScource++);
  printf("%s\n", szMyName);

  int iLen = strlen(szName2);
  printf("%d\n", iLen);

  strcpy(szMyName, "제이름은");
  strcat(szMyName, " 김경운 입니다.");
}