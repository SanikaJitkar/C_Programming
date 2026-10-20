#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name   :   DisplayEvenFactor
//  Input           :   Integer
//  Output          :   No return value
//  Description     :   Displays even factor of N numbers.
//  Date            :   20/10/2026
//  Author          :   Sanika Sunil Jitkar
//
////////////////////////////////////////////////////////////////////////////////////////
void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0)) 
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);
    return EXIT_SUCCESS;

}