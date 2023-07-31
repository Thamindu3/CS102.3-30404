#include <stdio.h>


int main() {
    char charValue,ncharValue;

    printf("Enter a Character: ");
    scanf("%c",&charValue);

    ncharValue = tolower(charValue);

    switch(ncharValue) {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
            printf("%c is a Vowel\n",charValue);break;
        default:
            printf("%c is not a Vowel\n",charValue);
    }
}
