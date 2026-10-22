#include<stdio.h>
#include<stdlib.h>
//----------------------------------------------------------------------------------------------------
//
//  Function name   :   AreaofCircle
//  Input           :   Integer 
//  Output          :   float
//  Description     :   Perform area of circle
//  Date            :   22/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//----------------------------------------------------------------------------------------------------
float AreaofCircle(int iNo)
{
    float const fpi = 3.14;
    float iAns = 0.0f;
    iAns = fpi*((iNo)*(iNo));

    return iAns;
}
int main()
{
    int iValue = 0;
    float iArea = 0.0f;

    printf("Enter radius of circle:\n");
    scanf("%d",&iValue);

    iArea = AreaofCircle(iValue);

    printf("Area of circle : %f",iArea);

    EXIT_SUCCESS;
}