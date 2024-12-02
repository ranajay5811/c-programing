#include<stdio.h>
void main()
{
    int age,name[20]; 


    printf("Enter Your age:-");
    scanf("%d", &age);


    printf("Enter Your name:-");
    scanf("%d", &name);


    


    if(age>=18)
    {
        printf(" You are Eligible for Voting....");
    }
    else
    {
        printf("You are NOT Eligible for Voting....");
    }
    


}