#include<stdio.h>
void main()
{
   int num,firstdigit, lastdigit;

   printf("Enter The num:-");
    scanf("%d", &num);
    
    lastdigit=num%10;
    while (num==0)
    {
        firstdigit=num+num*lastdigit;
    printf("total:-%d",firstdigit);
    }
    
    
}