#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int num;
    bool primeNumber;

    primeNumber = true;

    printf("Enter Value: ");
    scanf("%d",&num);

    if(num<=1) {
        primeNumber = false;
    }

    for(int i=2;i<=sqrt(num);++i) {
        printf("%d\n",i);
        printf("%f\n",sqrt(num));
        if(num%i==0) {
            primeNumber = false;
            break;
        }
    }
    if(primeNumber) {
        printf("%d is a Prime Number.",num);
    }else{
        printf("%d is not a Prime Number.",num);
    }
}
