#include <stdio.h>

int main() {
    
    double x;
    printf("Enter the distance in kilometers: ");
    scanf("%lf", &x);
    
    double yards = x * 1093.61; 
    printf("The distance in yards is: %.2lf\n", yards); 
    
    return 0;
}