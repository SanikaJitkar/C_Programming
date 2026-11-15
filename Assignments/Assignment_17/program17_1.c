#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Pattern
//  Input           :   Integer,Integer
//  Output          :   1       2       3       4
//
//                      5       6       7       8
//
//                      9       1       2       3
//
//                      4       5       6       7
//  Description     :   Perform  display number in number of row and col from 1 to 9
//  Date            :   10/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0,iSum1 = 0,iSum2 = 0;

    for(i = 1;i <= iRow ; i++)
    {
        for(j = 1; j <= iCol ; j++)
        {
            if(iSum1 >= 9)
            {
                iSum2 = iSum2 + 1;
                {
                   printf("%d\t",iSum2);
                } 
            }
            else
            {  
                iSum1 = iSum1 + 1;
                printf("%d\t",iSum1);
            }
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