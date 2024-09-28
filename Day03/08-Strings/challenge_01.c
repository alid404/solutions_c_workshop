#include <stdio.h>

int main() {
    char s[100];
    
    printf("Enter a string of characters: ");
    fgets(s, sizeof(s), stdin); 
    printf("The string you have entered is: %s", s);

    return 0;
}