#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   MultDigits
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Perform disply multiplication of all digits without including 0
//  Date            :   3/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int MultDigits(int iNo)
{
    int iDigit = 0,iMul = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMul = iMul * iDigit;
        }

        iNo = iNo /10;
    }
    return iMul;

}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Mutliplication of digits without 0 :%d",iRet);

    return EXIT_SUCCESS;
}