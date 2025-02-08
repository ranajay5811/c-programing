#include<stdio.h>
void main()
{
    int costprice,sellingprice,profite_loss;

    printf("Enter the your costprice :- ");
    scanf("%d",& costprice);

    printf("Enter the your sellingprice :- ");
    scanf("%d",& sellingprice);

    if (sellingprice > costprice)
    {
        profite_loss = sellingprice - costprice;
        printf("Your profite :- %d \n", profite_loss);

    }
    else
    if (sellingprice < costprice)
    {
        profite_loss = costprice - sellingprice;
        printf("Your loss :- %d \n", profite_loss);
    }
    else
    {
        printf("no profite , no loss");
    }

}