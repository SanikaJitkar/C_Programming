#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE -1
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name   :   Check
//  Input           :   Integer 
//  Output          :   Boolean
//  Description     :   number is divisible by 5 or not.
//  Date            :   19/10/2026
//  Author          :   Sanika Sunil Jitkar
//
////////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int iNo)
{
    if(iNo % 5 == 0)
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
    BOOL iRet = FALSE;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = Check(iValue);

    if(iRet == TRUE)
    {
        printf("Divisible by 5.");
    }
    else
    {
        printf("Not Divisible by 5.");
    }

    return EXIT_SUCCESS;
}