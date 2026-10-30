#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   SqareMeter
//  Input           :   Integer
//  Output          :   Double
//  Description     :   Perform to area in feet convert it into meter
//  Date            :   30/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
double SqareMeter(int iNo)
{
    double dArea = iNo * 0.0929;
    return dArea;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square feet:\n");
    scanf("%d",&iValue);

    dRet = SqareMeter(iValue);

    printf("Area in square meter :%lf",dRet);

    return EXIT_SUCCESS;
}