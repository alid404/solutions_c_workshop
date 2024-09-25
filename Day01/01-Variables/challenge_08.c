#include <stdio.h>
#include <math.h> 

int main() {
    
    double a, b, c;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    double geometric_mean = pow(a * b * c, 1.0 / 3.0);
    
    printf("The Geometric Mean is: %.2lf\n", geometric_mean); 

    return 0;
}

