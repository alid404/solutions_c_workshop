#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, x, y, z;
    double distance;

    printf("Enter the coordinates (a, b, c) for the first point: ");
    scanf("%d %d %d", &a, &b, &c);
        
    printf("Enter the coordinates (x, y, z) for the second point: ");
    scanf("%d %d %d", &x, &y, &z);
        
    double sum1 = x - a;
    double sum2 = y - b;
    double sum3 = z - c;
        
    double power1 = pow(sum1, 2);
    double power2 = pow(sum2, 2);
    double power3 = pow(sum3, 2);
        
    double total = power1 + power2 + power3;
    distance = sqrt(total);
            
    printf("Distance between the points is : %.2lf\n", distance);

    return 0;
}