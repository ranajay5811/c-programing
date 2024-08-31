#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a:-");
    scanf("%d",&a);

    printf("enter b:-");
    scanf("%d",&b);

    if (a<=b)
    {
        printf("b is max");
    }
    else
    {
        printf("a is max");
    }
    return 0;
}