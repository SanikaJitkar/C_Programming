#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   CheckEven
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Perform positive and negative number
//  Date            :   22/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void CheckEven(int iNo)
{
    if(iNo > 0)
    {
        printf("%d is Positive number.\n",iNo);
    }
    else if(iNo == 0)
    {
        printf("%d is Zero",iNo);
    }
    else
    {
        printf("%d is Negative Number.\n",iNo);
    }
}
int main()
{
    int iValue1 = 0;
    
    printf("Enter Number:\n");
    scanf("%d",&iValue1);

    CheckEven(iValue1);

    return EXIT_SUCCESS;
}