#include <stdio.h>

int main() {
    double temp;
    printf("Enter the temperature in Celsius: ");
    scanf("%lf", &temp);
    
    double K = temp + 273.15;
    printf("The temperature in Kelvin is: %.2lf\n", K);

    return 0;
}