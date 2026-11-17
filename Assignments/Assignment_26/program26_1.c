#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   DisplayASCII
//  Input           :   None
//  Output          :   None
//  Description     :   Perform display ASCII Table.
//  Date            :   17/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void DisplayASCII()
{
    int i = 0;

    for(i = 0; i <= 255; i++)
    {
        printf("%d\t%X\t%c\n",i,i,i); 
         
    }
}
int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}

//0 to 32 char are not printable.

