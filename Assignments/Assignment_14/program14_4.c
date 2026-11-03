#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   NonSumFact
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Perform disply non factor number summation
//  Date            :   3/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int NonSumFact(int iNo)
{
    int iCnt = 0,iSum = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
        
    }
    return iSum;   
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = NonSumFact(iValue);

    printf("Summation of non Factorial number:%d",iRet);

    return EXIT_SUCCESS;
}