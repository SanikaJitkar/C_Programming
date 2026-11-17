#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//---------------------------------------------------------------------------------
//
//  Function name   :   ChkDigit
//  Input           :   Character
//  Output          :   Boolean
//  Description     :   Perform display it is digit or not.
//  Date            :   14/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------

BOOL ChkDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
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

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Digit.",bRet);
    }
    else
    {
        printf("It is not a Digit.",bRet);
    }

    return EXIT_SUCCESS;
}