#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   KMtoMeter
//  Input           :   Integer 
//  Output          :   Integer
//  Description     :   Perform to km into meter
//  Date            :   30/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
int KMtoMeter(int iNo)
{
    int iKilometer = 1000;

    int iKMtoMeter = iKilometer * iNo;
    return iKMtoMeter; 

}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Distance:\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Kilometer into meter :%d",iRet);

    return EXIT_SUCCESS;
}