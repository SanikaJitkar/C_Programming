#include<stdio.h>
#include<stdlib.h>

//---------------------------------------------------------------------------------
//
//  Function name   :   ChkChar
//  Input           :   String,Character
//  Output          :   Boolean
//  Description     :   Perform  to accept string and character and compare string 
//                      & character if character found inside string count add 1
//                      it return index of Last  character 
//  Date            :   14/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------

int LastChar(char *str, char ch)
{
    int iIndex = 0;
    int iCount = -1;

    while(*str != '\0')
    {
        if(ch == *str)
        {   
           iCount = iIndex; 
        }
        iIndex++;
        str++;
    }
   
    return iCount;
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

    iRet = LastChar(arr,cValue);

    printf("character Location is:%d",iRet);

    return EXIT_SUCCESS;
}