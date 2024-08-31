#include<stdio.h>
void main ()
{
    int first_ang, second_ang, third_ang;

    printf("Enter the value of first_ang:-");
    scanf("%d",& first_ang);

    printf("Enter the value of second_ang:-");
    scanf("%d",& second_ang);

    third_ang = 180 - (first_ang + second_ang);
    printf("third_ang:- %d\n",third_ang);
    
}