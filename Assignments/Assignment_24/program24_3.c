#include<stdio.h>
#include<stdlib.h>

//---------------------------------------------------------------------------------
//
//  Function name   :   ChkChar
//  Input           :   String,Character
//  Output          :   Boolean
//  Description     :   Perform  to accept string and character and compare string 
//                      & character if character found inside string count add 1
//                      it return index of first character 
//  Date            :   14/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------

int FirstChar(char *str, char ch)
{
    int iIndex = 0;
    while(*str != '\0')
    {
        if(ch == *str)
        {   
            return iIndex;
        }
        str++;
        iIndex++;
    }
    return -1;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter character:\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr,cValue);

    printf("character Location is:%d",iRet);

    return EXIT_SUCCESS;
}