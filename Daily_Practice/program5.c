#include<stdio.h>
#include<stdlib.h>

int main()
{
    char cName[20];
    printf("Enter your name:\n");
    scanf("%[^'\n']s",cName);

    printf("Welcome...%s",cName);

    return EXIT_SUCCESS;
}