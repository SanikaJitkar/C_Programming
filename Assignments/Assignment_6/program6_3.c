#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   FindGreatest
//  Input           :   Integer,Integer,Integer 
//  Output          :   None
//  Description     :   Perform to find greatest number from 3 digits
//  Date            :   22/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 1000)
    {
        fFinalAmount = fAmount;
    }
    else if(fAmount <= 5000)
    {
        fDiscount = fAmount * 0.10f;
        fFinalAmount = fAmount - fDiscount;
    }
    else
    {
       fDiscount = fAmount * 0.20f; 
       fFinalAmount = fAmount - fDiscount;
    }
    printf("%f",fFinalAmount);
}
int main()
{
    float fAmount = 0.0f;

    printf("Enter Purches Amount:\n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}