#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iNo = 0;

    printf("Enter Number = ");
    if(scanf("%d",&iNo) != 1)
    {
        fprintf(stderr,"Invalid Input.");

        return EXIT_FAILURE;
    }
    printf("Valid Input");
    
    

    return EXIT_SUCCESS;
}