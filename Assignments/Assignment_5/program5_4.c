#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   ChechMultipleDivisibility
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Perform number is divisible by 3 or 5 or both
//  Date            :   22/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void ChechMultipleDivisibility(int iValue)
{
    if((iValue % 3 == 0) && (iValue % 5 == 0))
    {
        printf("%d Divisible by both",iValue);
    }
    else if(iValue % 3 == 0)
    {
        printf("%d Divisible by only 3",iValue);
    }
    else if(iValue % 5 == 0)
    {
        printf("%d Divisible by only 5",iValue);
    }
    else
    {
        printf("Not Divisible by Either.");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    ChechMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}