#include<stdio.h>
#include<stdlib.h>

//---------------------------------------------------------------------------------
//
//  Function name   :   strRevx
//  Input           :   String
//  Output          :   None
//  Description     :   Perform  to accept string and reverse it.
//  Date            :   14/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------

void strRevx(char *str)
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

    strRevx(arr);

    printf("Modified String is:%s",arr);

    return EXIT_SUCCESS;
}