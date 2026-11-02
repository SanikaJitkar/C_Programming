#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   RangeSum
//  Input           :   Integer,Integer
//  Output          :   Integer
//  Description     :   Perform sum of range number
//  Date            :   31/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int RangeSum(int iStart,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart > 0) && (iEnd > 0 ))
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            iSum = iSum + iCnt;
        }
        return iSum;
    }   
  
}

int main()
{

    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter Ending point:\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    if((iValue1 > 0) && (iValue2 > 0))
    {
       printf("Addition is:%d",iRet); 
    }
    else
    {
        printf("Invalid Range.");
    }
    
    return EXIT_SUCCESS;
}