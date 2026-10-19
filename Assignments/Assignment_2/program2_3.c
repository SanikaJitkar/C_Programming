#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name   :   Display
//  Input           :   Integer
//  Output          :   No return value
//  Description     :   display Hello when number is less than 10 otherwise display Demo 
//  Date            :   18/10/2026
//  Author          :   Sanika Sunil Jitkar
//
////////////////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);

    Display(iValue);


    return EXIT_SUCCESS;
}