#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   CountDiff
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Perform disply difference of summation of even and odd number
//  Date            :   3/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int CountDiff(int iNo)
{
    int iDigit = 0,iSumEven = 0, iSumOdd = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;   
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;   
        }

        iNo = iNo /10;
    }
    return iSumEven - iSumOdd;

}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference between Summation of even number and odd number :%d",iRet);

    return EXIT_SUCCESS;
}