#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//---------------------------------------------------------------------------------------------------
//
//  Function name   :   EvenOdd
//  Input           :   Integer 
//  Output          :   Boolean
//  Description     :   Perform even or odd number
//  Date            :   21/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------------------------
bool EvenOdd(
            int iNo
            )
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0,iResult = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iResult =EvenOdd(iValue);
    if(iResult == true)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is odd");
    }
    
    return EXIT_SUCCESS;
}
