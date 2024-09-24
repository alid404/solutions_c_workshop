#include <stdio.h>

int main() {
    int x;

    printf("Enter an integer: "); 
    scanf("%d", &x);              

    if (x % 2 == 0) {
        printf("The number %d is even.\n", x);
    } else {
        printf("The number %d is odd.\n", x);
    }

    return 0;
}
