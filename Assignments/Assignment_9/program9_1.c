#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Display
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Perform to print * and # N times
//  Date            :   30/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("#\t");
    }

    
}
int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}