#include <stdio.h>

int main() {

    int x;

    printf("Enter the number: ");
    scanf("%d", &x);

    if (x < 0) {
        printf("Negative\n");
    } else if (x > 0) {
        printf("Positive\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}



