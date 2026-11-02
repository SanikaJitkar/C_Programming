#include<stdio.h>
#include<stdlib.h>

//---------------------------------------------------------------------------------
//
//  Function name   :   CountFour
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Perform count number 2 in user input
//  Date            :   2/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------

int CountFour(int iNo)
{
    int iDigit = 0,iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 4)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }
    return iCount;
   

}
int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("Frequency of 4 in number:%d",iRet);
    return EXIT_SUCCESS;
}