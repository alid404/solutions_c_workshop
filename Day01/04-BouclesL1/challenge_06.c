#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("The first %d even numbers are: ", n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d", 2 * i ); 
        if (i <= n - 1) {
            printf(", "); 
        }
    }

    printf("\n"); 
    return 0;
}