#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Display
//  Input           :   Character
//  Output          :   None
//  Description     :   Perform display character capital case upto Z
//                      and lowercase until a
//  Date            :   17/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void Display(char cValue)
{
    char cCap = '\0';
    char cSmall = '\0';

    if(cValue >= 'A' && cValue <= 'Z')
    {
        for(cCap = cValue; cCap <= 'Z'; cCap++)
        {
            printf("%c\t",cCap);
        }
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        for(cSmall = cValue; cSmall >= 'a'; cSmall--)
        {
            printf("%c\t",cSmall);
        }
    }
    else
    {
        printf(NULL);
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