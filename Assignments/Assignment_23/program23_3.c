#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   strtogglex
//  Input           :   String
//  Output          :   None
//  Description     :   Perform  convert lowercase to Uppercase & 
//                      uppercase to lowercase 
//  Date            :   13/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z')) 
        {
            *str = *str - 32;
        }
        str++;
    }
    
}
int main()
{
    char arr[20];

    printf("Enter String:\n");
    scanf("%[^\n]s",arr);

    strtogglex(arr);

    printf("Modified String is:%s\n", arr);

    return EXIT_SUCCESS;
}