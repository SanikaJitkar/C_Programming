#include<stdio.h>
#include<stdlib.h>
typedef int BOOL ;
#define TRUE 1
#define FALSE 0
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name   :   CheckVowel
//  Input           :   Character
//  Output          :   Boolean
//  Description     :   Displays character is vowel or not
//  Date            :   20/10/2026
//  Author          :   Sanika Sunil Jitkar
//
////////////////////////////////////////////////////////////////////////////////////////
BOOL CheckVowel(char cValue)
{
    if((cValue == 'a')||(cValue == 'e')||(cValue == 'i')||(cValue == 'o')||(cValue == 'u')
     || (cValue == 'A')||(cValue == 'E')||(cValue == 'I')||(cValue == 'O')||(cValue == 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character:\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel.");
    }
    else
    {
        printf("It is not Vowel.");
    }

    return EXIT_SUCCESS;
}
