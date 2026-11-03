#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Percentage
//  Input           :   Integer,Integer
//  Output          :   Float
//  Description     :   Perform  display Percentage
//  Date            :   3/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
float Percentage(int iNo1,int iNo2)
{
    float fPercent = 0.0f;
    if((iNo1 != 0) && (iNo2 != 0))
    {
        fPercent = (float)iNo2 / iNo1 * 100;
    }
    return fPercent;

}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks:\n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks:\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is : %f",fRet);

    return EXIT_SUCCESS;
}