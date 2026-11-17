#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//---------------------------------------------------------------------------------
//
//  Function name   :   ChkCapital
//  Input           :   Character
//  Output          :   Boolean
//  Description     :   Perform display character ic Capital or not.
//  Date            :   14/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------

BOOL ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Capital character.",bRet);
    }
    else
    {
        printf("It is not a Capital character.",bRet);
    }

    return EXIT_SUCCESS;
}