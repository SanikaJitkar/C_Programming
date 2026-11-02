#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   RangeDisplayEven
//  Input           :   Integer,Integer
//  Output          :   None
//  Description     :   Perform disply even number in range
//  Date            :   31/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt = 0;
    if(iStart < iEnd) 
    {
        for(iCnt = iStart; iCnt <= iEnd;iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                printf("%d\t",iCnt);
            }
        }
    }
    else
    {
        printf("Invalid Range.");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point:");
    scanf("%d",&iValue1);

    printf("Enter Ending point:");
    scanf("%d",&iValue2);
    
    RangeDisplayEven(iValue1,iValue2);

    return EXIT_SUCCESS;
}