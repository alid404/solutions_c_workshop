#include <stdio.h>

int main() {

    char c;

    printf("Enter a character: ");
    scanf(" %c", &c); 
    
    if (c >= 'a' && c <= 'z') {
        printf("Lowercase\n");
    }
    else if (c >= 'A' && c <= 'Z') {
        printf("Uppercase\n");
    }
    else {
        printf("The character is neither lowercase nor uppercase.\n");
    }

    return 0;
}
