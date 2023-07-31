#include <stdio.h>

int main() {
    int num,tmp1,tmp2,result;

    printf("Enter Value: ");
    scanf("%d",&num);

    tmp=num;

    int i=0;
    while(tmp!=0) {
        ++i;
        tmp/=10;
    }

    tmp=num;

    while(tmp!=0) {
        result+=pow(tmp % 10,i);
        tmp/=10;
    }

    if(result==num) {
        printf("%d is an Armstrong Number.",num);
    }else {
        printf("%d is not an Armstrong Number.",num);
    }
}
