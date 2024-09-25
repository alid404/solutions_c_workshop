#include <stdio.h>

int main() {

    char c;

    printf("Enter a character: ");
    scanf(" %c", &c); 

    if (c >= 'a' && c <= 'z') {
        printf("The character you've entered is a lowercase alphabet: %c\n", c);
    } else if (c >= 'A' && c <= 'Z') {
        printf("The character you've entered is an uppercase alphabet: %c\n", c);
    } else {
        printf("The character you've entered is not an alphabet.\n");
    }

    return 0;
}
