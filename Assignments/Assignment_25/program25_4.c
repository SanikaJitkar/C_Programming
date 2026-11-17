#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//---------------------------------------------------------------------------------
//
//  Function name   :   ChkSmall
//  Input           :   Character
//  Output          :   Boolean
//  Description     :   Perform display it is smallcase character or not.
//  Date            :   14/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------

BOOL ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Smallcase character.",bRet);
    }
    else
    {
        printf("It is not a Smallcase character.",bRet);
    }

    return EXIT_SUCCESS;
}