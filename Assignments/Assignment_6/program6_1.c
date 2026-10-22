#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   CalculateElectricityBill
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Perform to find bill
//  Date            :   22/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void CalculateElectricityBill(int iUnits)
{
    int iBill = 0;
    if(iUnits > 0)
    {
        if(iUnits <= 100)
        {
            iBill = iUnits * 5;
        }
        else if(iUnits <= 200)
        {   
           iBill = (100 * 5) + ((iUnits - 100) * 7 );
           
        }
        else 
        { 
           iBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10 ); 
        } 

        printf("Bill :%d",iBill);
    }
    else
    {
        printf("Unit consumption is Invalid.");
    }
}
int main()
{

    int iUnits = 0;

    printf("Enter consumed units:\n");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}