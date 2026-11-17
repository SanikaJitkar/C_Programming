#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   CountSmall
//  Input           :   String
//  Output          :   Integer
//  Description     :   Perform display count of Small letters
//  Date            :   17/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int CountSmall(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("Count of Small Letters:%d",iRet);

    return EXIT_SUCCESS;
}