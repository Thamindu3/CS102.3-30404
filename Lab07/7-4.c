#include <stdio.h>

int main() {
    int row, column, i, j;
    printf("Enter Row: ");
    scanf("%d", &row);
    printf("Enter Column: ");
    scanf("%d", &column);

    int arr[row][column];
    int sum[row];

    for(i = 0; i < row; ++i) {
        sum[i] = 0;
        for(j = 0; j < column; ++j) {
            printf("Enter Number %dx%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
            sum[i] += arr[i][j];
        }
    }
    printf("-------------------------\n");
    printf("Sum = {");
    for(i = 0; i < row; ++i) {
        printf("%d", sum[i]);
        if(i < row-1) {
            printf(", ");
        }
        else {
            printf("}");
        }
    }
    printf("\n-------------------------\n");
}
