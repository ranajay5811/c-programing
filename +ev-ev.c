#include<stdio.h>
int main()
{
    int num;
    printf("enter num:-");
    scanf("%d",&num);

    if (num>0)
    {
    printf("num is Positive");
    }
    else if (num<0)
    {
    printf("num is Negative");
    }
    else
    {
    printf("num is Neutral");
    }
    return 0;
}