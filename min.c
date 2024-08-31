#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a:-");
    scanf("%d",&a);

    printf("enter b:-");
    scanf("%d",&b);

    if (a>=b)
    {
        printf("b is min");
    }
    else
    {
        printf("a is min");
    }
    return 0;
}