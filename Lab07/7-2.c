#include <stdio.h>

int main() {
    int column, row;
    printf("Enter Row: ");
    scanf("%d", &row);
    printf("Enter Column: ");
    scanf("%d", &column);

    int multiArr[row][column], i, j;
    int p = 0, n = 0, z = 0;
    for(i = 0; i < row; ++i) {
        for(j = 0; j <column; ++j) {
            printf("Enter Number %dx%d: ", i + 1, j + 1);
            scanf("%d", &multiArr[i][j]);
            if(multiArr[i][j] > 0) {
                ++p;
            }else if(multiArr[i][j] < 0) {
                ++n;
            }else {
                ++z;
            }
        }
    }
    printf("-------------------------\n");
    printf("No. of Positive: %d\n",p);
    printf("No. of Negative: %d\n",n);
    printf("No. of Zero: %d",z);
    printf("\n-------------------------\n")
}
