#include<stdio.h>
#include<stdlib.h>

int main()
{
    char cName[20];
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your name :\n");
    scanf("%[^'\n']s",&cName);

    printf("Enter your Age:\n");
    scanf("%d",&iAge);
    
    printf("Enter your Marks:\n");
    scanf("%f",&fMarks);

    printf("Name:%s\n",cName);
    printf("Age :%d\n",iAge);
    printf("Marks :%f\n",fMarks);


    return EXIT_SUCCESS;
}