/*
-----------------------------------------------
                Operation &&
-----------------------------------------------
Result1     Result2     Final Result
-----------------------------------------------
True        True        True
True        False       False
False       True        False           //short circuit Evalution
False       False       False           //short circuit Evalution
-----------------------------------------------

*/
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        printf("Number is divisible.");
    }
    else
    {
        printf("Number is not divisible.");
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}