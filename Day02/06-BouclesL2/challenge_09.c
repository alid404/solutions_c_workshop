#include <stdio.h>

int main() {
    int b, e;
    long result = 1;

    printf("Enter the base: ");
    scanf("%d", &b);
    printf("Enter the exponent: ");
    scanf("%d", &e);

    if (e < 0) {
        printf("Exponent should be a non-negative integer.\n");
        return 1;
    }

    for (int i = 0; i < e; i++) {
        result *= b;
    }

    printf("%d^%d = %ld\n", b, e, result);

    return 0;
}