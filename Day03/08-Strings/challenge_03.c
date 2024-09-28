#include <stdio.h>
#include <string.h>

int main() {
    char s[100], v[100];
    
    printf("Enter a string of characters: ");
    fgets(s, sizeof(s), stdin);
    printf("The string you have entered is: %s", s);
    
    printf("Enter a second string of characters: ");
    fgets(v, sizeof(v), stdin);
    printf("The string you have entered is: %s", v);
    
    s[strcspn(s, "\n")] = '\0';
    char y[200]; 
    int i = 0, j = 0;
    
    while (s[i]) {
        y[i] = s[i];
        i++;
    }
    
    while (v[j]) {
        y[i] = v[j];
        i++;
        j++;
    }
    
    y[i] = '\0'; 
    printf("The merged string is: %s", y);

    return 0;
}
