#include<stdio.h>
void main()
{
int num;

printf("Enter the num :-");
scanf("%d",& num);

if(num % 2 == 0)
{
    printf("%d is Even number.",num);
}
else
{
   printf("%d is odd number.",num);
}

}
