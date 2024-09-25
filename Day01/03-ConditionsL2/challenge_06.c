#include <stdio.h>

int main() {
    int x, y;
    float z, t;

    printf("Enter your electricity consumption (in kWh): ");
    scanf("%f", &z);

    printf("Enter your user type (1 for residential, 2 for commercial): ");
    scanf("%d", &x);

    printf("Enter your contract type (0 for standard, 1 for reduced): ");
    scanf("%d", &y);
    
        if (z < 0 || (x != 1 && x != 2) || (y != 0 && y != 1)) {
        printf("Invalid input. Please check your values.\n");
        return 1;
    }

    if (x == 1) { 
        if (y == 0) { 
            t = z * 0.20;
        } else { 
            t = z * 0.15;
        }
    } else { 
        if (y == 0) { 
            t = z * 0.30;
        } else { 
            t = z * 0.25;
        }
    }

    if (z > 500) {
        t += t * 0.10; 
    }

    printf("Total is %.2f€\n", t);
    return 0;
}
