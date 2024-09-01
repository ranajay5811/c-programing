#include<stdio.h>
void main ()
{
    int i, count=0, num;

    printf("Enter is num :- ");
    scanf("%d",&num);

while (num!=0)
{
  num = num/10;
  count++;

}

printf("num of count is :- %d",count);
}