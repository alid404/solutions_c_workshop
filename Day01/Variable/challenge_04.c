#include <stdio.h>

int main() {
    
    double x;
    printf("Enter the speed in km/h: ");
    scanf("%lf", &x);
    
    double m = x * 0.27778; 
    printf("The speed in meters per second is: %.2lf\n", m); 

    return 0;
}












