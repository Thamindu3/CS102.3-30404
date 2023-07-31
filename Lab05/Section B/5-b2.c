#include <stdio.h>

int main() {
    int mark;
    int sum=0,max=0,min=100;
    float avg;

    for(int i = 1;i<=10;++i) {
        printf("Enter Mark %d: ",i);
        scanf("%d",&mark);
        sum+=mark;

        if(mark>max) {
            max=mark;
        }

        if(mark<min) {
            min=mark;
        }
    }
    avg = (float) sum/10;

    printf("Minimum: %d\n",min);
    printf("Maximum: %d\n",max);
    printf("Total: %d\n",sum);
    printf("Average: %.2f\n",avg);
}
