#include <stdio.h>

int main() {
    int i, j;
    int arr1[3][3];
    printf("Array 1:\n");
    for(i = 0; i < 3; ++i) {
        for(j = 0; j < 3; ++j) {
            printf("Enter Number %dx%d: ", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    }
    int arr2[3][3];
    printf("Array 2:\n");
    for(i = 0; i < 3; ++i) {
        for(j = 0; j < 3; ++j) {
            printf("Enter Number %dx%d: ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
            arr1[i][j] += arr2[i][j];
        }
    }
    printf("-------------------------\n");
    printf("Sum = {");
    for(i = 0; i < 3; ++i ) {
        printf("{");
        for(j = 0; j < 3; ++j) {
            printf("%d", arr1[i][j]);
            if(j < 2) {
                printf(", ");
            }
            else {
                printf("}");
            }
        }
        if(i < 2) {
            printf(", ");
        }
        else {
            printf("}\n");
        }
    }
    printf("-------------------------\n");
}
