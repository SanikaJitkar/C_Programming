#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   RangeSumEven
//  Input           :   Integer,Integer
//  Output          :   Integer
//  Description     :   Perform sum of Even range number
//  Date            :   31/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int RangeSumEven(int iStart,int iEnd)
{
    int iCnt = 0, iSum = 0;

    if((iStart > 0) && (iEnd > 0))
    {
        for(iCnt = iStart; iCnt <= iEnd ; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
            
        }
        return iSum;
    }

}
int main()
{
    int iValue1 = 0,iValue2 = 0,iRet = 0;

    printf("Enter Starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter Ending point:\n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    if((iValue1 > 0) && (iValue2 > 0) && (iValue1 < iValue2))
    {
        printf("Addition of Even Number:%d",iRet);
    }
    else
    {
        printf("Invalid Range.");
    }


    return EXIT_SUCCESS;
}