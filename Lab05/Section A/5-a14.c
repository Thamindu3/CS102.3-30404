#include <stdio.h>
#include <math.h>

int main() {
    int intArray[10];
    int count=0;

    for(int i = 0;i<10;++i) {
        printf("Enter Value %d: ",i+1);
        scanf("%d",&intArray[i]);
    }


    for(int i = 0;i<10;++i) {
        if(intArray[i]%2==0) {
            ++count;
        }
    }

    printf("No. of Even Numbers: %d",count);
}
