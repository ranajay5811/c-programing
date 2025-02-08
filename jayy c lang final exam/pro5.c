#include <stdio.h>
int main()
{
    int size, i, sum = 0;

    printf("Enter the size of matrix : ");
    scanf("%d", &size);

    int matrix[size];

    printf("\nPlease enter the elements of Matrix: \n");

    for (i = 0; i < size; i++)
    {
        printf("Matrix[%d] = ", i);
        scanf("%d", &matrix[i]);
    }

    for (i = 0; i < size; i++)
    {
        sum += matrix[i];
    }
    printf("Sum of matrix is : %d", sum);
}
