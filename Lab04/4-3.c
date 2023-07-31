#include <stdio.h>

int main() {
    int op,r;
    float result;

    printf("------------------\n");
    printf("Circles\n");
    printf("------------------\n");
    printf("1-Circumference\n");
    printf("2-Area\n");
    printf("3-volume\n");
    printf("------------------\n");

    printf("Select : ");
    scanf("%d",&op);
    printf("Enter Radius: ");
    scanf("%d",&r);

    switch(op) {
        case 1:
            result = 2 * PI * r;
            printf("Output = %.2f",result);
            break;
        case 2:
            result = PI * r * r;
            printf("Output = %.2f",result);
            break;
        case 3:
            result = 4.0 / 3.0 * PI * r * r * r;
            printf("Output = %.2f",result);
            break;
        default:
            printf("Invalid Selection!");
    }
}
