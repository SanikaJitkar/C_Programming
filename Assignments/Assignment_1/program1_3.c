#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name   :   Display
//  Input           :   None
//  Output          :   No return value
//  Description     :   display number 5 to 1
//  Date            :   19/10/2026
//  Author          :   Sanika Sunil Jitkar
//
////////////////////////////////////////////////////////////////////////////////////////
void Display()
{
    int iCnt = 0;

    iCnt = 5;
    while(iCnt >= 1)
    {
        printf("%d\n",iCnt);
        iCnt--;
    }
}
int main()
{
    Display();

    return EXIT_SUCCESS;
}