#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   CircleArea
//  Input           :   Float 
//  Output          :   Double
//  Description     :   Perform to calculate area of circle
//  Date            :   30/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
double CircleArea(float fradius)
{
    const float  fPI = 3.14;
    double dArea = 0.0;

    dArea = fPI * (fradius * fradius);

    return dArea;

}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius:\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle:%.4f",dRet);

    return EXIT_SUCCESS;
}