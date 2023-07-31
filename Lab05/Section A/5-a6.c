#include <stdio.h>


int main() {
    int base,exponent,result;

    printf("Enter Base: ");
    scanf("%d",&base);
    printf("Enter Exponent: ");
    scanf("%d",&exponent);

    result = 1;

    for(int i=0;i<exponent;++i) {
        result*=base;
    }

    printf("%d^%d = %d",base,exponent,result);
}
