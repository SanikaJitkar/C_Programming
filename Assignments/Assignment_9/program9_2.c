#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   DollarToINR
//  Input           :   Integer 
//  Output          :   Integer
//  Description     :   Perform to Dollar into INR
//  Date            :   30/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int DollarToINR(int iNo)
{
    int iDollar = 0;
    int iINR = 70;

    return (iNo * iINR);

    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return EXIT_SUCCESS;
}