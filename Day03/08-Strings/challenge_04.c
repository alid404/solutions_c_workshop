#include <stdio.h>

int main() {
    char s[100], v[100];
   printf("Enter the first string: ");
    fgets(s, sizeof(s), stdin);

    printf("Enter the second string: ");
    fgets(v, sizeof(v), stdin);
    
    int i = 0;
    
    while (s[i] && v[i] && s[i] == v[i]) {
        i++;
    }
    
    if(s[i] - v[i] == 0)
        printf("the strings are the same\n");
    else 
        printf("the strings are different\n");
    return 0;
}
