#include <stdio.h>

int main() {
    //If-Else
    int num;

    printf("------------------\n");
    printf("Odd or Even\n");
    printf("------------------\n");

    printf("Enter Value: ");
    scanf("%d",&num);

    if(num%2==0) {
        printf("%d is Even.",num);
    }else {
        printf("%d is Odd.",num);
    }


    //Switch
    int num;

    printf("------------------\n");
    printf("Odd or Even\n");
    printf("------------------\n");

    printf("Enter Value: ");
    scanf("%d",&num);

    switch (num%2){
        case 0:
            printf("%d is Even.",num);
            break;
        default:
            printf("%d is Odd.",num);
    }
}
