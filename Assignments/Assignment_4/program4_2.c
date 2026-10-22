#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   CheckEvenOdd
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Perform even and odd number
//  Date            :   22/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0 )
    {
        printf("%d is Even Number.\n",iNo);
    }
    else
    {
        printf("%d is Odd Number.\n",iNo);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number.\n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}