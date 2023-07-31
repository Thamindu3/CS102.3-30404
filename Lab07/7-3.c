#include <stdio.h>

int main() {
    int row, column, i, j;
    printf("Enter Row: ");
    scanf("%d", &row);
    printf("Enter Column: ");
    scanf("%d", &column);

    int arr[row][column];
    int sum[column];

    for(i = 0; i < row; ++i) {
        for(j = 0; j < column; ++j) {
            if(!i){
                sum[j] = 0;
            }
            printf("Enter Number %dx%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
            sum[j] += arr[i][j];
        }
    }
    printf("-------------------------\n");
    printf("Sum = {");
    for(i = 0; i < column; ++i) {
        printf("%d", sum[i]);
        if(i < column-1) {
            printf(", ");
        }
        else {
            printf("}");
        }
    }
    printf("\n-------------------------\n");
}
