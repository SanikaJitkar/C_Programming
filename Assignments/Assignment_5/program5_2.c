#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   CheckLeapYear
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Perform year is leap or not
//  Date            :   22/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void CheckLeapYear(int iYear)
{
    if(iYear > 0)
    {
        if((iYear % 400 == 0)|| ((iYear % 4 == 0) && (iYear % 100 != 0)))
        {
            printf("%d is Leap Year .\n",iYear);
        }
        else
        {
            printf("%d is Not Leap Year.\n",iYear);
        }
    }
}
int main()
{
    int iYear = 0;

    printf("Enter year :\n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}