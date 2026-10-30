#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   OddFactorial
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Perform to odd factorial
//  Date            :   30/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iOdd = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo ; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iOdd = iOdd * iCnt; 
        }
    }
    return iOdd;
    

    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number.\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial of Number is %d",iRet);

    return EXIT_SUCCESS;
}