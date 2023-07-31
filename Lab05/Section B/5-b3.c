#include <stdio.h>

int main() {
    int price,total,count=0;
    float avg;

    for(int i = 1;i<=10;++i) {
        printf("Enter Price %d: ",i);
        scanf("%d",&price);
        total += price;
        if(price>200) {
            ++count;
        }
    }
    avg = (float) total / 10;

    printf("Total: %d\n",total);
    printf("Average: %.2f\n",avg);
    printf("No. of Items Greater Than 200: %d",count);
}
