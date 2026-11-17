#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Reverse
//  Input           :   String
//  Output          :   None
//  Description     :   Perform display reverse string
//  Date            :   17/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void Reverse(char *str)
{
    int i = 0, j = 0;
    char temp = 0;

    while(str[j] != '\0')
    {
        j++;
    }    
    j--;

    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
    
}

int main()
{
    char arr[20]; 

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("Modified String is:%s",arr);

    return EXIT_SUCCESS;
}