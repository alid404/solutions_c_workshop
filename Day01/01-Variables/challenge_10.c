#include <stdio.h>
#include <math.h>

int main() {
    double r;
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &r);
    
    double volume = (4.0 / 3.0) * M_PI * pow(r, 3);
    printf("The volume of the sphere is %.2lf\n", volume);

    return 0;
}