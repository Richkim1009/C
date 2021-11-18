
#include <stdio.h>
#include <string.h>
#include <locale.h>


void StrConvCase ()
{
    const char *pszString = "This program uses _strlwr and _strupr.";
    char *pszDup1 = _strdup ( pszString );
    char *pszDup2 = _strdup ( pszString );

    _strlwr ( pszDup1 );
    _strupr ( pszDup2 );

    printf ( "\n Org String : %s ", pszString );
    printf ( "\n _strlwr    : %s ", pszDup1 );
    printf ( "\n _strupr    : %s \n", pszDup2 );
}

//
void StrToken ( void )
{
    int     iTokenNumber = 0;
    char    szString [ ] = "Hello,, world!";
    const char szDelimiters [ ] = ", !";

    char *pszSave = _strdup ( szString );
    printf ( "\n szString = %s \n", szString );

    char *pToken = strtok ( szString, szDelimiters );

    while ( pToken != NULL )
    {
        printf ( " %d: [%s]\n", ++ iTokenNumber, pToken );
        pToken = strtok ( NULL, szDelimiters );
    }

    printf ( "\n szString = %s \n", szString );    // ���� ���� ���

    strcpy ( szString, pszSave );
    printf ( "\n szString = %s \n", szString );    // ���� ���� ���
}

//
void StrDuplicate ( )
{
    const char *pszString = "c/c++ ��� �����սô�!";
    char *pszDup1 = _strdup ( pszString );
    char *pszDup2 = _strdup ( pszString );

    printf ( "\n Org String             : %s ", pszString );
    printf ( "\n _strdup, 1st duplicate : %s ", pszDup1 );
    printf ( "\n _strdup, 2nd duplicate : %s \n", pszDup2 );

    free ( pszDup1 );
    free ( pszDup2 );
}

    //char *strDigits = "123456789";
//
void StrReverse ()
{
    char strDigits [] = "123456789";

    printf ( "\n %s", strDigits );
    printf ( "\n %s\n", _strrev ( strDigits ) );

    setlocale (LC_ALL, "korean");
    wprintf ( L"\n %s", wszHG );
    wprintf ( L"\n %s\n", _wcsrev ( wszHG ) );
}

const char* _pszString1 = "Study C";
const char* _pszString2 = "Study c++";
//
void PrintCmpr ( char* pszPrompt, int iCompareResult )
{
    if ( iCompareResult > 0 )
        printf ( "\n %s : %s > %s \n", pszPrompt, _pszString1, _pszString2 );

    else if ( iCompareResult == 0 )
        printf ( "\n %s : %s == %s \n\n", pszPrompt, _pszString1, _pszString2 );

    else if ( iCompareResult < 0 )
        printf ( "\n %s : \%s < %s\n", pszPrompt, _pszString1, _pszString2 );
}

//
void StrCmp ()
{
    PrintCmpr ( "strcmp       ", strcmp ( _pszString1, _pszString2 ));
    PrintCmpr ( "strncmp (7)  ", strncmp ( _pszString1, _pszString2, 7 ));
    PrintCmpr ( "_stricmp     ", _stricmp ( _pszString1, _pszString2 ));
    PrintCmpr ( "_strnicmp (7)", _strnicmp ( _pszString1, _pszString2, 7 ));
}

void Homework ();

//
int main()
{
    //StrCmp ();
    //StrReverse ();
    //StrDuplicate ();
    //StrToken ();
    //StrConvCase ( );

    Homework ();

    getchar ();
	return 0;
}

