
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

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name   :   Addition
//  Input           :   Integer ,Integer
//  Output          :   Integer
//  Description     :   Perform addition
//  Date            :   04/10/2026
//  Author          :   Sanika Sunil Jitkar
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int Addition(int iNo1,int iNo2)
{
    int iAns = 0;
    iAns = iNo1 +iNo2;   //business logic
    return iAns;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application  :   
//
///////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1=0 ,iValue2=0 ,iResult=0;

    printf("Enter First number :\n");
    scanf("%d",&iValue1);

    printf("Enter Second number :\n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1,iValue2);

    printf("Addition is :%d\n",iResult);
    return 0;
}