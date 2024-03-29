#include <stdio.h>
int main()
{
     float gross_salary;

 printf("enter salary: ");
 scanf("%f", &gross_salary);

float conveyance_allowance = 0.20 * gross_salary;
float house_rent = 0.40 * gross_salary;
float loan_installment = 1000.0;
float net_salary = gross_salary - (conveyance_allowance + house_rent + loan_installment);

printf("Ahmed's gross salary is %.2f and net salary is %.2f", gross_salary, net_salary);

 return 0;
}