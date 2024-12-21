#include <stdio.h>
void main()
{
   int i, n, sum = 0;

   printf("Enter the number of value in the array:- ");
   scanf("%d", &n);

   int jay[n];
   printf("Enter the value of the array:-\n");

   for (i = 0; i < n; i++)
   {
      scanf("%d", &jay[i]);
   }
   for (i = 0; i < n; i++)
   {
      if (jay[i] > 0)
      {
         sum += jay[i];
      }
   }

   printf("The sum of all positive value of array :- %d\n", sum);
}
