#include<stdio.h>
#include<stdlib.h>

//---------------------------------------------------------------------------------
//
//  Function name   :   CountTwo
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Perform count number 2 in user input
//  Date            :   2/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------

int CountTwo(int iNo)
{
    int iDigit = 0,iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("Frequency of 2 in number:%d",iRet);
    return EXIT_SUCCESS;
}