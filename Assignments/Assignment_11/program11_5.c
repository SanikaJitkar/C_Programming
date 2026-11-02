#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   RangeDisplayRev
//  Input           :   Integer,Integer
//  Output          :   None
//  Description     :   Perform disply reverse range
//  Date            :   31/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void RangeDisplayRev(int iStart,int iEnd)
{
    int iCnt = 0;

    if((iStart > 0) && (iEnd > 0) && (iStart < iEnd))
    {
        for(iCnt = iEnd; iCnt >= iStart ; iCnt--)
        {
            printf("%d\t",iCnt);
        }
        
    }
    else
    {
        printf("Invalid Range.");
    }

}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter Starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter Ending point:\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;
}