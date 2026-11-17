#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
//---------------------------------------------------------------------------------
//
//  Function name   :   ChkSpecial
//  Input           :   Character
//  Output          :   Boolean
//  Description     :   Perform display character is special character or not.
//  Date            :   17/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
BOOL ChkSpecial(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        return FALSE;
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
       return FALSE;
    }
    else if(cValue >= '0' && cValue <= '9')
    {
       return FALSE;
    }
    else
    {
        return TRUE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character:\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is a special Character.");
    }
    else
    {
        printf("It is not a special Character.");
    }

    return EXIT_SUCCESS;
}