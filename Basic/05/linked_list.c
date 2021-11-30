#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked.h"

PCSTR _pText = "Linked lists are the best and simplest example of a dynamic data structure";



void LinkedList() {
  PCSTR pDelimiter = " ,.";
  PSTR pToken;
  PSTR pNextToken;
  PSTR pText;

  pText = (PSTR)malloc (strlen(_pText) + 1);
  strcpy_s (pText, strlen(_pText) + 1, _pText);
  pToken = strtok_s(pText, pDelimiter, &pNextToken);

  while(pToken != NULL) {
    AddToken(pToken);
    pToken = strtok_s (NULL, pDelimiter, &pNextToken);
  }

  PrintTokens();
  DestroyLinkedList();
}

int main() {
  
  
  return 0;
}