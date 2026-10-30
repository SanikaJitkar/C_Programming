#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   EvenFactorial
//  Input           :   Integer 
//  Output          :   Integer
//  Description     :   Perform to Even factorial 
//  Date            :   30/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iEven = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEven = iEven * iCnt; 
        }
    }
    return iEven;
    

    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number.\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of Number is %d",iRet);

    return EXIT_SUCCESS;
}