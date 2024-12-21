#include <stdio.h>
long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;
    long long result;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        result = factorial(num);
        printf("The factorial of %d is: %lld\n", num, result);
    }
}
