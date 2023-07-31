#include <stdio.h>

int main() {
    //While
    int i = 0;
    while(i<=100) {
        printf("%d\n",i);
        i++;
    }

    //Do..While
    int i = 0;
    do{
        printf("%d\n",i);
        i++;
    }while(i<= 100);

    //For
    for(int i = 0;i<=100;i++){
        printf("%d\n",i);
    }
}
