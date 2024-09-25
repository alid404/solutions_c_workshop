#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: "); 
    scanf(" %c", &character);  

    switch (character) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y':
            printf("The character you have entered is a vowel.\n");
            break;
        default: 
            printf("The character you have entered is not a vowel.\n");
    }

    return 0;
}
