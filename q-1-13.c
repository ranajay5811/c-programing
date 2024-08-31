#include<stdio.h>
int main ()
{
    int a=24,b=12,add,sub,multi,div,mod;
    add=a+b;
    sub=a-b;
    multi=a*b;
    div=a/b;
    mod=a%b;

    printf("\n %d+%d=%d",a,b,add);
    printf("\n %d-%d=%d",a,b,sub);
    printf("\n %d*%d=%d",a,b,multi);
    printf("\n %d/%d=%d",a,b,div);
    printf("\n %d %% %d=%d",a,b,mod);
return 0;
}