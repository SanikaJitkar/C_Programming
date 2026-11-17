#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Difference
//  Input           :   String
//  Output          :   Integer
//  Description     :   Perform display Difference
//  Date            :   17/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int Difference(char *str)
{
    int iCap = 0, iSmall = 0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCap++;
        }
        else
        {
            iSmall++;
        }
        str++;
    }
    return  iSmall - iCap;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("Difference:%d",iRet);

    return EXIT_SUCCESS;
}