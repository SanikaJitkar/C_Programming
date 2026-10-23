#include<stdio.h>
#include<stdlib.h>
//----------------------------------------------------------------------------------------------------
//
//  Function name   :   CalculateParkingCharge
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Perform parking charges 
//  Date            :   23/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//----------------------------------------------------------------------------------------------------
void CalculateParkingCharge( int iHours)
{
    int iCharge = 0;
    if(iHours > 0)
    {
        if(iHours <= 2)
        {
            iCharge = iHours * 20;
        }
        else if(iHours <= 5)
        {
            iCharge = (2 * 20)+((iHours - 2) * 30);
        }
        else
        {
           iCharge = (2 * 20)+ (3 * 30) + ((iHours - 5) * 50); 
        }
        printf("Parking Charges :%d",iCharge);
    }
}
int main()
{
    int iHours = 0;

    printf("Enter parking Hours:\n");
    scanf("%d",&iHours);

    CalculateParkingCharge(iHours);

    return EXIT_SUCCESS;
}