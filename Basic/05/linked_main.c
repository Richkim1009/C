#include "linked.h"

#define OPTIMIZATION

void AddNode ( PNODE pNewNode );


PSTR    _pText = "Dynamic Memory Allocation in C by Professional Programmer.";

// Linked List의 Node를 가리키는 포인터
LISTPTR _listPtr;

//
void AddToken ( PSTR pToken )
{
    PNODE   pNewNode = calloc ( 1, sizeof ( NODE ) );
    strcpy_s ( pNewNode->info.szToken, sizeof ( pNewNode->info.szToken ), pToken );
    AddNode ( pNewNode );
}

//
void AddNode ( PNODE pNewNode )
{
    if ( _listPtr.pHead == NULL )
    {
        _listPtr.pHead = _listPtr.pTail = pNewNode;   // 제일 처음 Node
    }
    else
    {
        // 리스트 후미에 새 노드 부착
        PNODE   pLastNode = _listPtr.pTail;

        pLastNode->link.pNext = pNewNode;       // 마지막 노드에 새 노드 연결
        _listPtr.pTail = pNewNode;                 // 새 마지막 노드 설정
    }
}

//
void PrintTokens ( )
{
    PNODE   pNode = _listPtr.pHead;

    printf ( "\n == %s ==\n", _pText );

    while (pNode != NULL)
    {
        printf ( " %s\n", pNode->info.szToken );
        pNode = (PNODE) pNode->link.pNext;          // 다음 Node
    }
}

//
void DestroyLinkedList ( )
{
    PNODE   pNode = _listPtr.pHead;
    PNODE   pNodeNext;

    while (pNode != NULL)
    {
        pNodeNext = (PNODE) pNode->link.pNext;      // 다음 Node
        free ( pNode );
        pNode = pNodeNext;
    }

    memset ( &_listPtr, 0, sizeof ( LISTPTR ) );
}

//
void LinkedList ( )
{
    PSTR    pDelimiter = " ,.";
    PSTR    pToken;
    PSTR    pNextToken;
    PSTR    pText;

    pText = (PSTR) malloc ( strlen ( _pText ) + 1 );
    strcpy_s ( pText, strlen ( _pText ) + 1, _pText );

    pToken = strtok_s ( pText, pDelimiter, &pNextToken );

    while ( pToken != NULL )
    {
        AddToken ( pToken );
        pToken = strtok_s ( NULL, pDelimiter, &pNextToken );
    }

    PrintTokens ( );
    DestroyLinkedList ( );
}