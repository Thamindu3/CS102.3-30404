#include <stdio.h>

int main() {
    int num;
    unsigned long long fac = 1;

    printf("Enter Value: ");
    scanf("%d",&num);

    for(int i = 1;i<=num;i++) {
        fac=fac*i;
    }

    printf("Factorial of %d is %llu",num,fac);
}
