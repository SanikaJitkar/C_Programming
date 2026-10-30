#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   FactorialDiff
//  Input           :   Integer 
//  Output          :   Integer
//  Description     :   Perform to difference between even and odd factorial
//  Date            :   30/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEven = 1;
    int iOdd = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEven = iEven * iCnt; 
        }
    }
    for(iCnt = 1;iCnt <= iNo ; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iOdd = iOdd * iCnt; 
        }
    }
    return (iEven - iOdd);
      
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number.\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return EXIT_SUCCESS;
}