#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
//---------------------------------------------------------------------------------
//
//  Function name   :   ChkZero
//  Input           :   Integer
//  Output          :   Boolean
//  Description     :   Perform number contain zero or not
//  Date            :   2/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }
    return FALSE;

}
int main()
{

    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero.");
    }
    else
    {
        printf("There is no zero.");
    }
    return EXIT_SUCCESS;
}