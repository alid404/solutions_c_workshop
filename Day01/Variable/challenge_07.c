#include <stdio.h>

int main() {
    
    double a, b, c;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c); 
    
    double average = (a * 2 + b * 3 + c * 5) / 10;

    printf("The Weighted Average is: %.2lf\n", average); 

    return 0;
}
