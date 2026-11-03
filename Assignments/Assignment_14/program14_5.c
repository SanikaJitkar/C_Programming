#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   FactDiff
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Perform  difference between factorial and non factorial
//  Date            :   3/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int FactDiff(int iNo)
{
    int iCnt = 0,iFactSum = 0,iNonFactSum = 0;

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
           iNonFactSum = iNonFactSum + iCnt; 
        }
        
    }
    return (iFactSum - iNonFactSum);   
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Summation of non Factorial number:%d",iRet);

    return EXIT_SUCCESS;
}