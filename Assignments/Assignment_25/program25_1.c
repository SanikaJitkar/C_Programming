#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//---------------------------------------------------------------------------------
//
//  Function name   :   ChkAlpha
//  Input           :   Character
//  Output          :   Boolean
//  Description     :   Perform display character or not.
//  Date            :   14/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------

BOOL ChkAlpha(char ch)
{
    if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
    {
        return TRUE;
    }

    return FALSE;

}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character:\n");
    scanf(" %c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is a character.",bRet);
    }
    else
    {
        printf("It is not a character.",bRet);
    }

    return EXIT_SUCCESS;
}