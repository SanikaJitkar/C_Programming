#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   OddDisplay
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Perform to print odd number up to N
//  Date            :   30/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void OddDisplay(int iNo)
{
    int iCount = 0;

    for(iCount =1; iCount <= iNo; iCount++)
    {
        if(iCount % 2 != 0)
        {
            printf("%d\t",iCount);
        }
        
    }
}
int main()
{

    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}