#include <stdio.h>

int main() {
    int mNum;

    printf("Enter Month Number: ");
    scanf("%d",&mNum);

    switch(mNum) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 Days in Month %d",mNum);break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 Days in Month %d",mNum);break;
        case 2:
            printf("28 Days in Month 2");break;
        default:
            printf("Invalid Month Number!");
    }
}
