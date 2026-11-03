#include<stdio.h>
#include<stdlib.h>

//---------------------------------------------------------------------------------
//
//  Function name   :   Multiply
//  Input           :   Integer,Integer,Integer
//  Output          :   Integer
//  Description     :   Perform  display mutliplication of number
//  Date            :   3/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int Multiply(int iNo1,int iNo2,int iNo3)
{
    int iMul = 1;

    if(iNo1 == 0) 
    {
        iMul = iNo2 * iNo3; 
        if(iNo2 == 0)
        {
            iMul = iNo3;
        }
    }
    else if(iNo2 == 0) 
    {
        iMul = iNo1 * iNo3; 
        if(iNo3 == 0)
        {
            iMul = iNo1;
        }
    }
    else if(iNo1 == 0) 
    {
        iMul = iNo2 * iNo3; 
        if(iNo3 == 0)
        {
            iMul = iNo2;
        }
    }
    else
    {
        iMul = iNo1 * iNo2 * iNo3;
    }

    return iMul;

}

int main()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0,iRet = 0;

    printf("please enter three numbers:\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication of three number:%d",iRet);


    return EXIT_SUCCESS;
}