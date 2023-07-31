#include <stdio.h>
int main()
{
 float C,F;
 printf("Enter the Temperature in Fahrenheit: ");
 scanf("%f",&F);
 C=5.0*(F-32.0)/ 9.0;
 printf("The Temperature in Celsius is %.2f \n",C);
}
