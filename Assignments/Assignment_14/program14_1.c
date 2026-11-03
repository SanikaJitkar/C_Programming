#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   MultiFact
//  Input           :   Integer
//  Output          :   Integer
//  Description     :   Perform disply multiplication of factor
//  Date            :   3/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int MultiFact(int iNo)
{

    int iCnt = 0,iMul = 1;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMul = iMul * iCnt;
        }
    }
    return iMul;

}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);
    
    printf("%d",iRet);

    return EXIT_SUCCESS;
}