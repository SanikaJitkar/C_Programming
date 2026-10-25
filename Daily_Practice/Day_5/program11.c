#include<stdio.h>
#include<stdlib.h>
//----------------------------------------------------------------------------------------------------
//
//  Function name   :   CheckPositive
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Perform positive or negative number
//  Date            :   25/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//----------------------------------------------------------------------------------------------------

void CheckPositive(int iNo)
{
    if(iNo > 0)
    {
        printf("Positive Number.");
    }
    else if(iNo == 0)
    {
        printf("Zero.");
    }
    else
    {
        printf("Negative Number."); 
    }
    }

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);
        
    CheckPositive(iValue);

    return EXIT_SUCCESS;
    
}

