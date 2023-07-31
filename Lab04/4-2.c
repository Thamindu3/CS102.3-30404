#include <stdio.h>

int main() {
    int op,num1,num2,result;

    printf("------------------\n");
    printf("Calculator\n");
    printf("------------------\n");
    printf("1-Addition\n");
    printf("2-Substraction\n");
    printf("3-Multiplication\n");
    printf("4-Division\n");
    printf("------------------\n");

    printf("Select Operator: ");
    scanf("%d",&op);
    printf("Enter 2 Values: \n");
    scanf("%d %d",&num1,&num2);

    switch(op) {
        case 1:
            result=num1+num2;
            printf("Output = %d",result);
            break;
        case 2:
            result=num1-num2;
            printf("Output = %d",result);
            break;
        case 3:
            result=num1*num2;
            printf("Output = %d",result);
            break;
        case 4:
            printf("Output = %.2f",(float) num1/num2);
            break;
        default:
            printf("Invalid Operator!");
    }
}
