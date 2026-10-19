#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name   :   Display
//  Input           :   Integer,Integer
//  Output          :   No return value
//  Description     :   display first number in second number times 
//  Date            :   18/10/2026
//  Author          :   Sanika Sunil Jitkar
//
////////////////////////////////////////////////////////////////////////////////////////
void Display(int iNo,int iFrequency)
{
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFrequency; iCnt++ )
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue1 = 0, iFrequency = 0;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter frequency:\n");
    scanf("%d",&iFrequency);

    Display(iValue1,iFrequency);

    return EXIT_SUCCESS;
}