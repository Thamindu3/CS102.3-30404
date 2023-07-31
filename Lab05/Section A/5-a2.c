#include <stdio.h>

int main() {
    int tot,mk;
    float avg;

    for(int i=1;i<=10;i++){
        printf("Enter Mark %d: ",i);
        scanf("%d",&mk);
        tot+=mk;
    }

    avg=(float) tot/10;

    printf("Total = %d\n",tot);
    printf("Average = %.2f\n",avg);

    if (avg<50) {
        printf("Fail!\n");
    }else{
        printf("Pass!\n");
    }
}
