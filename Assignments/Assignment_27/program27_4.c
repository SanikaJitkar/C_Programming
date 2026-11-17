#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 0
#define FALSE 1
typedef int BOOL; 
//---------------------------------------------------------------------------------
//
//  Function name   :   ChkVowel
//  Input           :   String
//  Output          :   Integer
//  Description     :   Perform display vowel is present or not.
//  Date            :   17/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
BOOL ChkVowel(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if( (*str == 'A' || *str == 'E'|| *str == 'I' || *str == 'O'|| *str == 'U') || (*str == 'a' || *str == 'e'|| *str == 'i' || *str == 'o'|| *str == 'u'))
        {
           return TRUE; 
        }
        str++;
    }
    return FALSE;
}
int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel.");
    }
    else
    {
        printf("There is no vowel.");
    }

    return EXIT_SUCCESS;
}