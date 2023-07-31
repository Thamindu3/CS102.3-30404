#include <stdio.h>


int main() {
    int tmp, num1, num2;

    num1 = 0;
    num2 = 1;

    printf("%d",num1);

    for(int i = 0;i<9;++i) {
        printf(", %d",num2);
        tmp = num1 + num2;
        num1 = num2;
        num2 = tmp;
    }
}
