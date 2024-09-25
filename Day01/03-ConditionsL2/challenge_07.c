#include <stdio.h>

int main() {
    float x, z;
    int y;

    printf("Enter your annual income (in euros): ");
    scanf("%f", &x);  

    printf("Enter your tax status (1 for single, 2 for married, 3 for head of household): ");
    scanf("%d", &y);  

    if (x < 0 || (y < 1 || y > 3)) {
        printf("Invalid input. Please check your values.\n");
        return 1;
    }

    float deduction;
    if (y == 1) {
        deduction = 1000;
    } else if (y == 2) {
        deduction = 2000;
    } else { 
        deduction = 3000;
    }

    if (x <= 20000) {
        z = x * 0.05 - deduction;
    } else if (x > 20000 && x <= 50000) {
        z = x * 0.1 - deduction;
    } else { 
        z = x * 0.2 - deduction;
    }

    printf("Tax is %.2f€\n", z);
    return 0;
}
