#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   MultipleDisplay
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Perform to first 5 multiple of N number 
//  Date            :   30/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void MultipleDisplay(int iNo)
{
    int iCount = 0;
    int iMul = 0;

    for(iCount =1; iCount <= 5; iCount++)
    {
        iMul = iCount * iNo;
        printf("%d\t",iMul);
        
    }
}
int main()
{

    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}