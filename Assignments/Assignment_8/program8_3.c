#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Factorial
//  Input           :   Integer 
//  Output          :   Integer
//  Description     :   Perform factorial of number
//  Date            :   30/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int Factorial(int iNo)
{
    int iCount = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCount = iNo; iCount >= 1;iCount--)
    {
        iFact = iFact * iCount;

    }
    return iFact;

}
int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}