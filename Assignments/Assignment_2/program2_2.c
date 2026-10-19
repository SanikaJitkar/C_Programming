#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name   :   Display
//  Input           :   Integer
//  Output          :   No return value
//  Description     :   display * 
//  Date            :   18/10/2026
//  Author          :   Sanika Sunil Jitkar
//
////////////////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
     
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)
    {
        printf("*\n");
        iNo--;
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