#include <stdio.h>

int main() {
    
    double C;
    printf("Enter the water temperature in Celsius: ");
    scanf("%lf", &C);
    
    if (C < 0) {
        printf("State: Solid\n");
    } else if (C >= 0 && C < 100) {
        printf("State: Liquid\n");
    } else {
        printf("State: Gas\n");
    }

    return 0;
}
