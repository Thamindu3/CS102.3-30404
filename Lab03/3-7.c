#include<stdio.h>
 int main()
 {
float bsalary,bonus,additional_allowance,with_bonus,monthly_sales;
printf("enter bsalary: ");
scanf("%f",&bsalary);

int wyears,gross_monthly_remuneration ;
printf("enter working years: ");
scanf("%d",&wyears);

char city_letter[10];
printf("enter the city letter: ");
scanf("%s",&city_letter);

if(wyears>5)
additional_allowance=bsalary*0.1;

if(city_letter=='C')
additional_allowance=bsalary+2500;
printf("enter the monthly sales: ");
scanf("%f",monthly_sales);

if(monthly_sales>=0 && monthly_sales<=25000)
with_bonus=bsalary*0.1;

if(monthly_sales>25000 && monthly_sales<=50000)
with_bonus=bsalary*0.12;

if(monthly_sales>50000)
with_bonus=bsalary*0.15;

gross_monthly_remuneration=additional_allowance+with_bonus;
printf("Gross monthly remuneration is %.2f ",gross_monthly_remuneration);
}
