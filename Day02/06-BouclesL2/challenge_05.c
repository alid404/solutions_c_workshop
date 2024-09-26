#include <stdio.h>

int main() {
    int n, i, sum = 0; 

    printf("Enter a positive integer: ");
    scanf("%d", &n); 

    i = n;
    while(i >= 0) {
        sum += i; 
        i--; 
    }

    printf("The sum of numbers to %d is %d\n", n, sum); 

    return 0;
}