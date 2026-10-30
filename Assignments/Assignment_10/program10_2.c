#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   RectArea
//  Input           :   Float ,Float
//  Output          :   Double
//  Description     :   Perform to calculate area of rectangle
//  Date            :   30/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
double RectArea(float fwidth,float fhight)
{

    double dArea = 0.0;

    dArea = fwidth * fhight;

    return dArea;

}
int main()
{
    float fValue1 = 0.0f,fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width:\n");
    scanf("%f",&fValue1);

    printf("Enter Hight:\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Circle:%.4lf",dRet);

    return EXIT_SUCCESS;
}