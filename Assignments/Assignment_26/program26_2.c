#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Display
//  Input           :   Character
//  Output          :   None
//  Description     :   Perform display character uppercase into lowercase
//                      and lowercase into uppercase
//  Date            :   17/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void Display(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c",cValue + 32);
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c",cValue - 32);
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("%c",cValue);
    }
    else
    {
        printf("%c",cValue);
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