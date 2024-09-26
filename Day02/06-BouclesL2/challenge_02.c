#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of lines to create: ");
    scanf("%d", &n);
    
    char c = '*';
    int i = 0; 
    while (i < n) {
        int j = 0; 
        while (j < 2 * i + 1) {
            printf("%c", c);
            j++;
        }
        printf("\n"); 
        i++; 
    }
    
    return 0;
}
