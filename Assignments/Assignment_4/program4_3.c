#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   FindGreater
//  Input           :   Integer ,Integer
//  Output          :   None
//  Description     :   Perform greater and same number
//  Date            :   22/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void FindGreater(int iNo1,int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("%d is Greater Number.\n",iNo1);
    }
    else if(iNo2 > iNo1)
    {
        printf("%d is Greater Number.\n",iNo2);
    }
    else
    {
        printf("Both Numbers are Equal.\n");
    }
}
int main()
{
    int iValue1= 0,iValue2 = 0;

    printf("Enter first Number:\n");
    scanf("%d",&iValue1);

    printf("Enter second Number:\n");
    scanf("%d",&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}