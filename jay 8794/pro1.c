#include<stdio.h>
void main()
{
    int Firstang,Secondang,Thirdang;

    printf("Enter The First Angle Of Triangle:-");
    scanf("%d", &Firstang);

    printf("Enter The Second Angle Of Triangle:-");
    scanf("%d", &Secondang);

    Thirdang = (180-Firstang-Secondang);

    printf("The Third Angle Of Triangle :- %d",Thirdang);
}