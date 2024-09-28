#include <stdio.h>

int ft_check(int n) {
    if (n % 2 == 0)
        return 1;
    else
        return 0; 
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n); 
    
    if (ft_check(n)) {
        printf("%d is even.\n", n);
    } else {
        printf("%d is odd.\n", n);
    }

    return 0; 
}
