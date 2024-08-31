#include<stdio.h>
int main ()
{
    int rollno,eng,guj,maths,account,stat,eco,BA,com,total;
    float avg;
    char name[20];

    printf("enter roolno:-");
    scanf("%d",&rollno);

    printf("enter student name:-");
    scanf("%s",&name);

    printf("enter eng mark:-");
    scanf("%d",&eng);

    printf("enter guj mark:-");
    scanf("%d",&guj);

    printf("enter account mark:-");
    scanf("%d",&account);

    printf("enter stat mark:-");
    scanf("%d",&stat);

    printf("enter maths mark:-");
    scanf("%d",&maths);

    printf("enter eco mark:-");
    scanf("%d",&eco);

    printf("enter BA mark:-");
    scanf("%d",&BA);

    printf("enter com mark:-");
    scanf("%d",&com);
    
total= eng+guj+maths;
avg= total/3;

printf("\n roolno is =%d",rollno);
printf("\n student name is =%s",name);
printf("\n eng is =%d",eng);
printf("\n guj is =%d",guj);
printf("\n com is =%d",com);
printf("\n BA is =%d",BA);
printf("\n stat is =%d",stat);
printf("\n account is =%d",account);
printf("\n eco is =%d",eco);
printf("\n maths is =%d",maths);
printf("\n total is =%d",total);
printf("\n avg is =%.2f",avg);

return 0;
}
