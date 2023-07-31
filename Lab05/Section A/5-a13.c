#include <stdio.h>
#include <math.h>

int main() {
    int intArray[10];

    for(int i = 0;i<10;++i) {
        printf("Enter Value %d: ",i+1);
        scanf("%d",&intArray[i]);
    }

    printf("Entered Values:");
    for(int i = 0;i<10;++i) {
        printf(" %d",intArray[i]);
    }
}
