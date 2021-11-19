#include <stdio.h>

struct PERSONINFO {
  char szName[16];
  unsigned short wAge;
  unsigned char bSex;
  char szAddress[64];
}; // person = {"Gim Gyung Woon", 28, 'M', "Korea Seoul"}; 한꺼번에도 가능함

typedef struct _PERSONINFO2 {
  char szName[16];
  unsigned short wAge;
  unsigned char bSex;
  char szAddress[64];
} PERSONINFO2;

// 구조체는 4의 배수로 padding을 한다.

void PrintSturctSize() {
  struct _TEST {
    int iAge;
    char cSex;
  };
  printf("\n 구조체 크기 = %d\n", sizeof(struct _TEST));
}


int main() {
  struct PERSONINFO person = {"Gim Gyung Woon", 28, 'M', "Korea Seoul"};
  PERSONINFO2 person2 = {"Kim Gyung Woon", 28, 'M', "Korea Seoul"};
  return 0;
}