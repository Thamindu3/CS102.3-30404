#include <stdio.h>
int main()
{
 int byear,age;
 char name[10];
 printf("Enter Name: ");
 scanf("%s",name);
 printf("Enter your birth year ");
 scanf("%d",&byear);
 age=2023-byear;
 printf("%s is %d years old",name,age);
}

