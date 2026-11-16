#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   strlwrx
//  Input           :   String
//  Output          :   None
//  Description     :   Perform  convert Uppercase into lowercase 
//  Date            :   13/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void strlwrx(char *str)
{ 
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z') 
        {
            *str = *str + 32; 
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter String:\n");
    scanf("%[^\n]s",arr);

    strlwrx(arr);

    printf("Modified String is:%s\n", arr);

    return EXIT_SUCCESS;
}