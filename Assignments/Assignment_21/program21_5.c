#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Pattern
//  Input           :   Integer,Integer(3 ,4)
//  Output          :   1       1       1       1
//
//                      2       2       2       2
//
//                      3       3       3       3
//
//                      4       4       4       4     
//
//  Description     :   Perform  display number
//  Date            :   13/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow + 1; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",i);
            
        }
        printf("\n\n");
    }
    
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows and column:\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}