#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------------------
//
//  Function name   :   CheckCharacterType
//  Input           :   Character 
//  Output          :   None
//  Description     :   Perform character is uppercase or lowercase or digit or Special char
//  Date            :   22/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------------------
void CheckCharacterType(char cValue)
{
    if((cValue >= 65 ) && (cValue <= 90))
    {
        printf("UpperCase Alphabet.");
    }
    else if((cValue >= 97 ) && (cValue <= 122))
    {
        printf("Lowercase Alphabet.");
    }
    else if((cValue >= '0' ) && (cValue <= '9'))
    {
        printf("Digit.");
    }
    else
    {
        printf("Special Character.");
    }

}
int main()
{
    char cValue = '\0';

    printf("Enter Character:\n");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}