#include<stdio.h>
 int main()
 {
char empname[20];
printf("enter employee name: ");
scanf("%s",&empname);
float bsalary,newsalary,increament;
printf("enter bsalary: ");
scanf("%f",&bsalary);
if(bsalary<5000)
newsalary=bsalary+(bsalary*0.05);
if(bsalary>=5000 && bsalary<10000)
newsalary=bsalary+(bsalary*0.1);
if(bsalary>=10000)
newsalary=bsalary+(bsalary*0.15);
printf("Employee name %s",empname);
printf("New salary %f",newsalary);
 }

