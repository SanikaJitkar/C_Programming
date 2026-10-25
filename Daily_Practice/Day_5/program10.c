#include<stdio.h>
#include<stdlib.h>
//----------------------------------------------------------------------------------------------------
//
//  Function name   :   DisplayDigits
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Perform display digit 
//  Date            :   25/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//----------------------------------------------------------------------------------------------------
void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo/10;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return EXIT_SUCCESS;
}