#include <stdio.h>

int main() {
    int arrSize;
    printf("Enter Size of Square Matrix: ");
    scanf("%d", &arrSize);

    int i, j;
    int arr[arrSize][arrSize];
    for(i = 0; i < arrSize; ++i ) {
        for(j = 0; j < arrSize; ++j) {
            printf("Enter Number %dx%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    int tru = 1;
    for(i = 0; i < arrSize; ++i) {
        for(j = 0; j < arrSize; ++j) {
            if(i==j) {
                if(arr[i][j] != 1){
                    tru = 0;
                    break;
                }
            }else {
                if(arr[i][j] != 0) {
                    tru = 0;
                    break;
                }
            }
        }
    }

    printf("-------------------------\n");
    if(tru) {
        printf("It is an Identity Matrix.\n");
    }else {
        printf("It is not an Identity Matrix.\n");
    }
    printf("-------------------------\n");
}
