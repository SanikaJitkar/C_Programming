#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   CheckVotingEligibility
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Perform voting eligibility
//  Date            :   22/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void CheckVotingEligibility(int iAge)
{
    if(iAge >= 21)
    {
        printf("Eligible for Voting.");
    }
    else if((iAge <= 16) && (iAge > 0))
    {
        printf("Not Eligible for Voting.");
    }
    else
    {
        printf("Invalid Age.\n");
    }
}
int main()
{
    int iAge = 0;

    printf("Enter Age.\n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}