#include <stdio.h>

int ft_fact(int n){
    unsigned int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    return factorial;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; 
    }

    printf("%d! = %u\n", n, ft_fact(n));

    return 0; 
}
