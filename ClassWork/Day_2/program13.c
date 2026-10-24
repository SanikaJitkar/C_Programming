
#include<stdio.h>
#include<stdlib.h>

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

int Addition(
                int iNo1,  //first parameter
                int iNo2   //Second parameter
            )
{
    int iAns = 0;
    iAns = iNo1 +iNo2;     //business logic
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
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"Unable to proceed as Input is Invalid \n .");

        return EXIT_FAILURE;
    }

    printf("Enter Second number :\n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"Unable to proceed as Input is Invalid \n .");

        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1,iValue2);

    printf("Addition is :%d\n",iResult);
    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//  step 5:Test the program.
//  
//  tested test cases
//------------------------
//  Input1      Input2      Output
//  10          11          21
//  11          0           11
//  0           11          11
//  20          -9          11
//  -9          20          11
//  -20         -11         -31
//
///////////////////////////////////////////////////////////////////////////////////////////////////////