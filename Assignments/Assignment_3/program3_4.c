#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name   :   DisplayConvert
//  Input           :   Character
//  Output          :   No return value
//  Description     :   Displays character convert upper into lower and lower into upper
//  Date            :   20/10/2026
//  Author          :   Sanika Sunil Jitkar
//
////////////////////////////////////////////////////////////////////////////////////////
void DisplayConvert(char cValue)
{
    if((cValue >= 65) && (cValue <= 90) )
    {
        printf("%c",cValue+32);
    }
    else if((cValue >= 97) && (cValue <= 122))
    {
        printf("%c",cValue-32);
    }
    
}
int main()
{

    char cValue = '\0';
    printf("Enter Character:\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}