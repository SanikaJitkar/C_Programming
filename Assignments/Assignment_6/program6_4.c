#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   CheckTriangle
//  Input           :   Integer,Integer,Integer 
//  Output          :   None
//  Description     :   Perform valid and invalid triangle
//  Date            :   22/10/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void CheckTriangle(int iSide1,int iSide2,int iSide3)
{
    if((iSide1 > 0) && (iSide2 > 0) && (iSide3 > 0))
    {
        if(((iSide1 + iSide2) > iSide3) && ((iSide1 + iSide3) > iSide2) && (iSide2 + iSide3 > iSide1))
        {
            printf("Valid Triangle.");
        }
        else
        {
            printf("Invalid Triangle.");
        }
    }
}
int main()
{
    int iSide1 = 0,iSide2 = 0,iSide3 = 0;

    printf("Enter Three sides:\n");
    scanf("%d %d %d",&iSide1,&iSide2,&iSide3);

    CheckTriangle(iSide1,iSide2,iSide3);

    return EXIT_SUCCESS;
}