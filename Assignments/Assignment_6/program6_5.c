#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   CalculateBonus
//  Input           :   Float,Integer 
//  Output          :   None
//  Description     :   Perform to find bonus
//  Date            :   22/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void CalculateBonus(float fSalary,int iYears)
{
    float fBonus = 0.0f;

    if((fSalary > 0) && (iYears > 0))
    {
        if(iYears > 10)
        {
            fBonus = (fSalary * 0.15f);
        }
        else if(iYears > 5 )
        {
            fBonus = (fSalary * 0.10f); 
        }
        else
        {
            fBonus = (fSalary * 0.05f);
        }

        printf("Bonus: %f",fBonus);
    }
}
int main()
{

    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter Salary and Years of Service:\n");
    scanf("%f %d",&fSalary,&iYears);

    CalculateBonus(fSalary,iYears);

    return EXIT_SUCCESS;
}