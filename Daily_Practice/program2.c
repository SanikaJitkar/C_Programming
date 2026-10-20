#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name   :   Addition
//  Input           :   Integer ,Integer
//  Output          :   Integer
//  Description     :   Perform addition
//  Date            :   12/10/2026
//  Author          :   Sanika Sunil Jitkar
//
///////////////////////////////////////////////////////////////////////////////////////////////////////
int Addition(
                int iNo1,       //First parameter
                int iNo2       //Second parameter
            )
{
    int iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
}
int main()
{
    int iValue1 = 0,iValue2 = 0,iResult = 0;

    printf("Enter first Number :");
    scanf("%d",&iValue1);

    printf("Enter Second Number :");
    scanf("%d",&iValue2); 
    
    iResult = Addition(iValue1,iValue2);

    printf("Addition is = %d",iResult);
    
    return EXIT_SUCCESS;
}