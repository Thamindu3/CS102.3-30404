#include <stdio.h>

int main() {
    char num[10];
    int total = 0;

    printf("Enter a number: ");
    scanf("%s", num);

    int length = strlen(num);

    for(int i = 0; i < length; i++) {
        total += num[i] - '0';
    }

    printf("Sum of the digits: %d\n", total);
}
