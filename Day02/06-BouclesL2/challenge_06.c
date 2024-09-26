#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int i = 1;
    int first = 1; 
    
    while (i <= n) {
        if (n % i == 0) {
            if (!first) { 
                printf(", ");
            }
            printf("%d", i);
            first = 0; 
        }
        i++;
    }
    printf("\n");
    
    return 0;
}