#include <stdio.h>

int main() {
    int arr[3][3], i, j;
    for(i = 0; i < 3; ++i ) {
        for(j = 0; j < 3; ++j) {
            printf("Enter Number %dx%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);

        }
    }
    printf("-------------------------\n");
    printf("3x3 Array = {");
    for(i = 0; i < 3; ++i ) {
        printf("{");
        for(j = 0; j < 3; ++j) {
            printf("%d", arr[i][j]);
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

    int diagonal1[3], diagonal2[3];
    for(i = 0, j = 2; i < 3 && j >= 0; ++i, --j) {
        diagonal1[i] = arr[i][i];
        diagonal2[i] = arr[i][j];
    }

    printf("Diagonal 1 = {");
    for(i = 0; i < 3; ++i) {
        printf("%d",diagonal1[i]);
        if(i < 2) {
            printf(", ");
        }
        else {
            printf("}\n");
        }
    }

    printf("Diagonal 2 = {");
    for(i = 0; i < 3; ++i) {
        printf("%d",diagonal2[i]);
        if(i < 2) {
            printf(", ");
        }
        else {
            printf("}\n");
        }
    }
    printf("-------------------------\n");
}
