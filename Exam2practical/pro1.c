#include <stdio.h>
void main()
{
    int length, hight, area;

    printf("Enter the value of length :- ");
    scanf("%d", &length);

    printf("Enter the value of hight :- ");
    scanf("%d", &hight);

    area = (length * hight) / 2;

    printf("The area of Triangle is:- %d ", area);
}