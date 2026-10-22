#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   CheckDivisibility
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Perform number is divisible by 5 or not
//  Date            :   22/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void CheckDivisibility(int iNo1)
{
    if(iNo1 % 5 == 0)
    {
        printf("Divisible by 5.\n");
    }
    else
    {
        printf("Not Divisible by 5.\n");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter first Number:\n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}