#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   struprx
//  Input           :   String
//  Output          :   None
//  Description     :   Perform  convert lowercase into Uppercase  
//  Date            :   13/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void struprx(char *str)
{ 
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z') 
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
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified String is:%s\n", arr);

    return EXIT_SUCCESS;
}