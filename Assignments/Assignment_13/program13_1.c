#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   CountEven
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Perform disply even number count
//  Date            :   3/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int CountEven(int iNo)
{
    int iDigit = 0,iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iCount++;
        }
        iNo = iNo /10;
    }
    return iCount;

}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet =CountEven(iValue);

    printf("Count of Even number:%d",iRet);

    return EXIT_SUCCESS;
}