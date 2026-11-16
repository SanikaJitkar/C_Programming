#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   DisplayDigit
//  Input           :   String
//  Output          :   None
//  Description     :   Perform  display digit from string 
//  Date            :   13/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void DisplayDigit(char *str)
{
    int iDigit = 0;
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        str++;
    }   
}
int main()
{
    char arr[20];

    printf("Enter String:\n");
    scanf("%[^\n]s",arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}