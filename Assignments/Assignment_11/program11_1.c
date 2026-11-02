#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   RangeDisplay
//  Input           :   Integer,Integer 
//  Output          :   None
//  Description     :   Perform to display number in range
//  Date            :   31/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void RangeDisplay(int iStart,int iEnd)
{
    int iCnt = 0;
    for(iCnt = iStart; iCnt <= iEnd;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point:");
    scanf("%d",&iValue1);

    printf("Enter Ending point:");
    scanf("%d",&iValue2);
    
    RangeDisplay(iValue1,iValue2);

    return EXIT_SUCCESS;
}