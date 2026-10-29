#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//----------------------------------------------------------------------------------------------------
//
//  Function name   :   CheckPerfectNumber
//  Input           :   Integer 
//  Output          :   Boolean
//  Description     :   Perform perfect or not
//  Date            :   29/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//----------------------------------------------------------------------------------------------------

bool CheckPerfectNumber(int iNo)
{
    int iCount = 0;
    int iSum = 0;

    for(iCount = 1;iCount <= iNo/2;iCount++)
    {
        if(iNo % iCount == 0)
        {
            iSum = iSum + iCount;
        }
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    bRet = CheckPerfectNumber(iValue);

    if(bRet == true)
    {
        printf("Perfect Number.\n");
    }
    else
    {
      printf("Not Perfect Number.\n");  
    }



    return EXIT_SUCCESS;
}