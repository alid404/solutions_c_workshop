#include <stdio.h>

int main() {
    
    int x, y;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if (x == y) {
        printf("The result is: %d\n", (x + y) * 3);
    } else {
        printf("The result is: %d\n", (x + y));
    }

    return 0;
}
