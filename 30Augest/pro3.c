#include<stdio.h>
void main ()
{
    int i, first, last, num;

    printf("Enter is num :- ");
    scanf("%d",&num);

    last = num%10;

    while (num!=0)
    {
        first = num;
        num = num/10; 
    }
    
    printf("\n first num is:- %d",first);
    printf("\n last num is:- %d",last);
    printf("\n sum of first and last digits is:- %d",first+last);
}