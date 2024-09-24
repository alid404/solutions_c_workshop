#include <stdio.h>

int main() {

    double l, w;
    printf("Enter the length and width of the rectangle: ");
    scanf("%lf %lf", &l, &w);
    
    double area = l * w;
    printf("The area of the rectangle is %.2lf\n", area);

    return 0;
}