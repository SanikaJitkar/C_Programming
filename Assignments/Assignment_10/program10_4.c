#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   FhtoCs
//  Input           :   Float 
//  Output          :   Double
//  Description     :   Perform to Temperature in fahrenheit convert into celcius
//  Date            :   30/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
double FhtoCs(float fTemp)
{
    double dCelsius = ((fTemp - 32)*(5.0/9.0));
    return dCelsius;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit:\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in fahrenheit convert into celcius :%lf",dRet);

    return EXIT_SUCCESS;
}