/*
-----------------------------------------------
                Operation ||
-----------------------------------------------
Result1     Result2     Final Result
-----------------------------------------------
True        True        True            //short circuit Evalution
True        False       True            //short circuit Evalution
False       True        True           
False       False       False
-----------------------------------------------

*/
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) || ((iNo % 5) == 0))
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