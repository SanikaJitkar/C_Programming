#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   CountWhite
//  Input           :   String
//  Output          :   Integer
//  Description     :   Perform  display count of whitw spaces
//  Date            :   13/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int CountWhite(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ' ' )
        {
            iCount++;
        }
        str++;
    }  
    return iCount; 
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^\n]s",arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces:%d\n",iRet);

    return EXIT_SUCCESS;
}