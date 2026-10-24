#include<stdio.h>
#include<stdlib.h>

int main()
{

    char sName[30] ;
    int iAge = 0;
    float fMarks = 0.0f;


    printf("Enter your Name :\n");
    scanf("%[^'\n']s",sName);    //Enter remains(Enter \n) in input buffer

    printf("Enter your Age : \n");
    scanf(" %d",&iAge);   //space added 
//space work as flush
    printf("Enter Your Marks : \n");
    scanf("%f",&fMarks);

    printf("Welcome %s\n",sName);
    printf("Your age is :%d\n",iAge);
    printf("Your Marks is :%f\n",fMarks);


    return EXIT_SUCCESS;
}