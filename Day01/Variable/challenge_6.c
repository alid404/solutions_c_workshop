#include <stdio.h>

int main() {
    
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b); 

    printf("a + b is: %lf\n", a + b);
    printf("a - b is: %lf\n", a - b);
    printf("a * b is: %lf\n", a * b);
    printf("a / b is: %lf\n", a / b);

    return 0;
}

