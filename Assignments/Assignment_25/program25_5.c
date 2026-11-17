#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//---------------------------------------------------------------------------------
//
//  Function name   :   DisplaySchedule
//  Input           :   Character
//  Output          :   None
//  Description     :   Perform display exam schedule
//  Date            :   14/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------

void DisplaySchedule(char cDiv)
{
    if((cDiv == 'A') || (cDiv == 'a'))
    {
        printf("Your Exam at 7.00 Am.\n");
    }
    else if((cDiv == 'B') || (cDiv == 'b'))
    {
        printf("Your Exam at 8.30 Am.\n");
    }
    else if((cDiv == 'C') || (cDiv == 'c'))
    {
        printf("Your Exam at 9.20 Am.\n");
    }
    else if((cDiv == 'D') || (cDiv == 'd'))
    {
        printf("Your Exam at 10.30 Am.\n");
    }
    else
    {
        printf("Invalid Input.\n");
    }

}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character:\n");
    scanf(" %c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}