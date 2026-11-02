#include<stdio.h>
#include<stdlib.h>

//---------------------------------------------------------------------------------
//
//  Function name   :   Count
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Perform count number less than 6 in user input
//  Date            :   2/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------

int Count(int iNo)
{
    int iDigit = 0,iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("Frequency of less than 6 in number:%d",iRet);
    return EXIT_SUCCESS;
}