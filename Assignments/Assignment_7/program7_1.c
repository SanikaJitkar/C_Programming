#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Pattern
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Perform to print $ and *
//  Date            :   30/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void Pattern(int iNo)
{
    int iCount = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCount = 1;iCount <= iNo; iCount++)
    {
        printf("$\t*\t");
    }

}
int main()
{

    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}