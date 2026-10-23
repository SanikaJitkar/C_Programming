#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   CheckAdmission
//  Input           :   Float,Integer 
//  Output          :   None
//  Description     :   Perform eligible for admission or not
//  Date            :   22/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void CheckAdmission(float fMarks,int iAge)
{
    if((fMarks > 0) && (iAge > 0))
    {
        if((fMarks >= 60) && (iAge >= 17))
        {
            printf("Eligible for Admmision.");
        }
        else 
        {
            printf("Not Eligible.");
        }

    }
    else
    {
        printf("Invalid Input.\n");
    }
    
}
int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks ans Age :\n");
    scanf("%f %d",&fMarks, &iAge);

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}
