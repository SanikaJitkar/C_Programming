#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Pattern
//  Input           :   Integer,Integer
//  Output          :   a       b       c       d       e
//
//                      1       2       3       4       5
//
//                      a       b       c       d       e
//
//                      1       2       3       4       5
//
//                      a       b       c       d       e
//  Description     :   Perform  display character and number alternate seq.
//  Date            :   10/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0,iNo = 1;
    char ch = '\0';

    for(i = 1; i<= iRow; i++)
    {
        iNo = 1;
        ch  = 'a';

        for(j = 1; j <= iCol ; j++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",ch);
                ch++;
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
    int iValue1  = 0,iValue2  = 0;

    printf("Enter number of rows and coloum:\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}