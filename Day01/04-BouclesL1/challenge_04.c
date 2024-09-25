#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("The first %d odd numbers are: ", n);
    
    for (int i = 0; i < n; i++) {
        printf("%d", 2 * i + 1); 
        if (i < n - 1) {
            printf(", "); 
        }
    }

    printf("\n"); 
    return 0;
}
