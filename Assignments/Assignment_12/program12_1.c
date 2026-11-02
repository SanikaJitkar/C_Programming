#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   DisplayDigit
//  Input           :   Integer
//  Output          :   None
//  Description     :   Perform disply display digit in reverse order
//  Date            :   2/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        printf("%d\n",iDigit);

        iNo = iNo / 10;
    }

}
int main()
{
    int iValue = 0;
     
    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}