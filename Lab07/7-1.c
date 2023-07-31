#include <stdio.h>

int main() {
    int arraySize;
    int p = 0, n = 0, z = 0;
    printf("Enter Size of the Array: ");
    scanf("%d",&arraySize);

    int arr[arraySize];
    for(int i = 0; i<arraySize; ++i) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &arr[i]);
        if(arr[i] > 0) {
            ++p;
        }else if(arr[i] < 0) {
            ++n;
        }else {
            ++z;
        }
    }

    printf("-------------------------\n");
    printf("No. of Positive: %d\n",p);
    printf("No. of Negative: %d\n",n);
    printf("No. of Zero: %d",z);
    printf("\n-------------------------\n");
}
