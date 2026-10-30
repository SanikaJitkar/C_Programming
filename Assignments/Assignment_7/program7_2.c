#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Display
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Print number until user input
//  Date            :   30/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void Display(int iNo)
{
    int iCount = 0;

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("%d\t",iCount);
    }
}
int main()
{

    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}