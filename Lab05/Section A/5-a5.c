#include <stdio.h>


int main() {
    char num[10];
    int reverse = 0;
    int length, i;

    printf("Enter Value: ");
    scanf("%s", num);

    length = strlen(num);
    i = length - 1;

    do {
        reverse = reverse * 10 + (num[i] - '0');
        --i;
    } while (i >= 0);

    printf("Reverse: %d\n", reverse);
}
