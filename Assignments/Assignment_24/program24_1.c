#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//---------------------------------------------------------------------------------
//
//  Function name   :   ChkChar
//  Input           :   String,Character
//  Output          :   Boolean
//  Description     :   Perform  to accept string and character and compare string 
//                      & character if character found inside string it return true
//  Date            :   14/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(ch == *str)
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter character:\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found.");
    }
    else
    {
        printf("Character not found.\n");
    }

    return EXIT_SUCCESS;
}