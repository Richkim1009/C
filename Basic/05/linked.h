
#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

typedef char*  PSTR;


typedef struct _LINK
{
    struct _NODE    *pNext;     // 다음 Node를 가리킴

} LINK, * PLINK;


typedef struct
{
    char	szToken [ 32 ];

} INFORMATION, * PINFORMATION;


typedef struct _NODE
{
    LINK        link;
    INFORMATION info;

} NODE, * PNODE;

//
typedef struct _LISTPTR
{
    PNODE   pHead;
    PNODE   pTail;

} LISTPTR, * PLISTPTR;
