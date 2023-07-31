
#include <stdio.h>
int main()
{
 int IntValue;
 float FloatValue;
 double DoubleValue;
 char CharValue;
 printf("Enter Integer:");
 scanf("%d",&IntValue);
 printf("Enter Float:");
 scanf("%f",&FloatValue);
 printf("Enter Double:");
 scanf("%lf",&DoubleValue);
 printf("Enter Character:");
 scanf(" %c",&CharValue);
 printf("%d\n",IntValue);
 printf("%f\n",FloatValue);
 printf("%lf\n",DoubleValue);
 printf("%c\n",CharValue);
}
