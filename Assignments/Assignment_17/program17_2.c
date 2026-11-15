#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Pattern
//  Input           :   Integer,Integer
//  Output          :   2       4       6       8       10
//
//                      1       3       5       7       9
//
//                      2       4       6       8       10
//
//                      1       3       5       7       9
//  Description     :   Perform  display   number of row and col in even and odd seq.
//  Date            :   10/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0,iEven = 2 ,iOdd = 1;

    for(i = 1;i <= iRow ; i++)
    {

        iEven = 2;
        iOdd = 1;
        for(j = 1; j <= iCol + 1 ; j++)
        {
            if(i % 2 != 0 )
            {
                printf("%d\t",iEven);
                iEven += 2;
            }
            else
            {
                printf("%d\t",iOdd); 
                iOdd += 2; 
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