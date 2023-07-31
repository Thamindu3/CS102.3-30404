#include <stdio.h>

int main() {
    char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=0;i<26;++i) {
        printf("%c = %d\n",alphabet[i],alphabet[i]);
    }
}
