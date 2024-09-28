#include <stdio.h>

int main() {
    char s[100];
   printf("Enter a string of characters: ");
    fgets(s, sizeof(s), stdin);
    
    int i = 0;
    while (s[i]) {
        i++;
    }
    
    i = i - 1;
    while(i >= 0){
        printf("%c",s[i]);
        i--;
    }

    return 0;
}
