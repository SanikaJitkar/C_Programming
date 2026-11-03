#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
//---------------------------------------------------------------------------------
//
//  Function name   :   ChkGreater
//  Input           :   Integer
//  Output          :   BOOL
//  Description     :   Perform  display greater and smaller
//  Date            :   3/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }

}

int main()
{

    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number:\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return EXIT_SUCCESS;
}