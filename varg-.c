#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a:-");
    scanf("%d",&a);

    printf("enter b:-");
    scanf("%d",&b);

printf("(%d - %d)*(%d - %d)=%d",a,b,a,b,(a-b)*(a-b));
return 0;

}