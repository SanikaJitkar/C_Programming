
/*
step 1:Understand the problem statement.
step 2:write the algoritham.
step 3:Decide the programming language.
step 4:wite the program.
step 5:Test the program.
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  step 1:Understand the problem statement.
//      User is going to enter any two integers 
//      and we have to perform addition.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  step 2:write the algoritham.
/*
        START
            Accept first number as No1
            Accept first number as No2
            create the variable as Ans to store the result
            perform the addition and store into Ans
            Display the result from Ans
        END
*/
//
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   step 3:Decide the programming language.
//         We select C programming.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   step 4:wite the program.
//      
///////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int main()
{
    int iValue1 ,iValue2 ,iResult;

    printf("Enter First number :\n");
    scanf("%d",&iValue1);

    printf("Enter Second number :\n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;//business logic

    printf("%d\n",iResult);
    return ;
}