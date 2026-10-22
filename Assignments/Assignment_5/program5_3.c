#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   DisplayGrade
//  Input           :   Float 
//  Output          :   None
//  Description     :   Perform to show grade base on marks
//  Date            :   22/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void DisplayGrade(float fMarks)
{
    if((fMarks > 0) && (fMarks < 100))
    {
        if(fMarks >= 90) 
        {
            printf("Grade A\n");
        }
        else if(fMarks >= 75) 
        {
            printf("Grade B\n");
        }
        else if(fMarks >= 60) 
        {
            printf("Grade C\n");
        }
        else if(fMarks >= 40) 
        {
            printf("Grade D\n");
        }
        else
        {
            printf("Fail\n");
        }
    }
    else
    {
        printf("Invalid Marks");
    }

}
int main()
{
    float fmarks = 0.0f;

    printf("Enter Marks:\n");
    scanf("%f",&fmarks);

    DisplayGrade(fmarks);

    return EXIT_SUCCESS;
}