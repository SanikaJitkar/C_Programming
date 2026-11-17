#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Display
//  Input           :   Character
//  Output          :   None
//  Description     :   Perform display character decimal,Hex and octal value.
//  Date            :   17/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void Display(char cValue)
{
    if((cValue >= 'A' && cValue <= 'Z') || (cValue >= 'a' && cValue <= 'z'))
    {
        printf("Decimal    :%d\nHexadecimal:0X%02X\nOctal      :%04o",cValue,cValue,cValue);
    }
    else
    {
        printf("Invalid Input.");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter Character:\n");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}