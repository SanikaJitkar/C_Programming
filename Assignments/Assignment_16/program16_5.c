#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Pattern
//  Input           :   Integer,Integer
//  Output          :   None
//  Description     :   Perform  display number from 1 to multiply by row and col
//  Date            :   5/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0, iSum = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j =1 ; j<= iCol; j++)
        {
            iSum = iSum + 1;
            printf("%d\t",iSum);
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}