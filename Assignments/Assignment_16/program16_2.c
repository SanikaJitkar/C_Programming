#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------------
//
//  Function name   :   Pattern
//  Input           :   Integer,Integer
//  Output          :   None
//  Description     :   Perform  display character in upper case and lower case
//  Date            :   3/11/2026
//  Author          :   Sanika Sunil Jitkar
//
//---------------------------------------------------------------------------------
void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0;
    char ch1 = '\0',ch2 = '\0';

    for(i = 1,ch1 = 'A',ch2 = 'a'; i<= iRow; i++,ch1++,ch2++)
    {
        for(j = 1;j<= iCol;j++)
        {
            if(i % 2 != 0 )
            {
                printf("%c\t",ch1);
            }
            else
            {
                printf("%c\t",ch2);  
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows and coloum:\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}