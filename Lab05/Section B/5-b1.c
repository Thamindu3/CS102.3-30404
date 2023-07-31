#include <stdio.h>

int main() {
    int num;
    int p=0,n=0,z=0;

    for(int i = 1;i<=10;++i) {
        printf("Enter Value %d: ",i);
        scanf("%d",&num);

        if(num>0) {
            ++p;
        }else if(num<0) {
            ++n;
        }else {
            ++z;
        }
    }
    printf("\nNo. of,\n");
    printf("Positive: %d\n",p);
    printf("Negative: %d\n",n);
    printf("Zero: %d\n",z);
}
