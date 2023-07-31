#include<stdio.h>
 int main()
 {
int n1,n2,n3,max,min;
printf("enter n1: ");
scanf("%d",&n1);
printf("enter n2: ");
scanf("%d",&n2);
printf("enter n3: ");
scanf("%d",&n3);
max=n1;
if(max<n2)
max=n2;
if(n2<n3)
max=n3;
min=n1;
if(min>n2)
min=n2;
if(n2>n3)
min=n3;
printf("Lagest is %d ",max);
printf("smallest is %d ",min);
 }
