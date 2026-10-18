#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name   :   Display 
//  Input           :   None
//  Output          :   Marvellos(5 times)
//  Description     :   display (marvellous 5 times)
//  Date            :   19/10/2026
//  Author          :   Sanika Sunil Jitkar
//
////////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("Marvellous\n");
    }
}
int main()
{
    Display();

    return EXIT_SUCCESS;
}