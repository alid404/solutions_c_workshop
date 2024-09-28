#include <stdio.h>

int main() {
    char s[100];
    printf("Enter a string of characters: ");
    fgets(s, sizeof(s), stdin);
    
    int i = 0;
    char result[100];
    int j = 0; 

    while (s[i]) {
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n') {
            result[j] = s[i]; 
            j++;
        }
        i++;
    }
    
    result[j] = '\0'; 
    printf("%s\n", result); 

    return 0;
}
