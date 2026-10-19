#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE -1
typedef int BOOL;
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name   :   CheckEven
//  Input           :   Integer
//  Output          :   Boolean
//  Description     :   display number is even or odd 
//  Date            :   18/10/2026
//  Author          :   Sanika Sunil Jitkar
//
////////////////////////////////////////////////////////////////////////////////////////
BOOL CheckEven(int iNo)
{
    if(iNo % 2 == 0)
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

    iRet = CheckEven(iValue);

    if(iRet == TRUE)
    {
        printf("Even number.");
    }
    else
    {
        printf("Odd number.");
    }
    return EXIT_SUCCESS;
}