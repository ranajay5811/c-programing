#include <stdio.h>
void main()
{
    int startNum, i;

    printf("Enter the startNum :- ");
    scanf("%d", &startNum);

    for (i = startNum; i >= 10; i -= 10)
    {
        printf("%d ", i);
    }
    printf("\n");
}