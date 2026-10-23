#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//----------------------------------------------------------------------------------------------------
//
//  Function name   :   CheckYear
//  Input           :   Integer 
//  Output          :   Boolean
//  Description     :   Perform year is Leap or Not 
//  Date            :   23/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//----------------------------------------------------------------------------------------------------
bool CheckYear(int iYear)
{
    if(iYear > 0)
    {
        if((iYear % 400 == 0) ||(iYear % 4 == 0) && (iYear %100 != 0))
        {
            return true;
        }
        else 
        {
            return false;
        }
    }

}
int main()
{
    int iYear = 0;
    bool bRet = '\0';

    printf("Enter Year:\n");
    scanf("%d",&iYear);

    bRet = CheckYear(iYear);

    if(bRet == true)
    {
        printf("%d is Leap Year.",iYear);
    }
    else
    {
        printf("%d is Not Leap Year.",iYear);
    }

    return EXIT_SUCCESS;
}