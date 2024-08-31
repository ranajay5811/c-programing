#include<stdio.h>
void main ()
{
    int base_salary, HRA_percantage, DA_percantage, TA_percantage, gross_salary;

     printf("Enter the base_salary:-");
    scanf("%d",& base_salary);

     HRA_percantage = base_salary * 10/100;
     DA_percantage = base_salary * 5/100;
     TA_percantage = base_salary * 8/100;

      gross_salary=  base_salary + HRA_percantage + DA_percantage + TA_percantage;

      printf("THE gross_salary is %d",gross_salary);
}