#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Pattern
//  Input           :   Integer,Integer
//  Output          :   1       2       3       4
//
//                      2       3       4       5
//
//                      3       4       5       6
//
//                      4       5       6       7
//  Description     :   Perform  display  number
//  Date            :   10/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0,iNo = 1;

    for(i = 1;i<= iRow;i++)
    {
        iNo = i;
        for(j = 1; j <= iCol;j++)
        {
            if(i % 2 != 0)
            {
                printf("%d\t",iNo);
                iNo++;
            }
            else
            {
                printf("%d\t",iNo);
                iNo++;
            }
            
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    
    printf("Enter number of rows and coiumns:\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}