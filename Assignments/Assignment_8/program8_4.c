#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Table
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Perform N number Table
//  Date            :   30/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void Table(int iNo)
{
    int iCount = 0;
    int iTab = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCount = 1; iCount <= 10; iCount++)
    {
        iTab = iCount * iNo;
        printf("%d\t",iTab);
    }
     
}
int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}