#include <stdio.h>

int main() {
    int age, years_of_contribution;
    float total_saved, bonus , final_amount;

    printf("Enter your Age: ");
    scanf("%d", &age);
    
    printf("Enter your Years of contribution: ");
    scanf("%d", &years_of_contribution);
    
    printf("Enter your Total amount saved (in euros): ");
    scanf("%f", &total_saved);

    if (age >= 65) {
        if (years_of_contribution >= 30 && total_saved >= 100000) {
            printf("Retirement Plan: Full plan with high pension\n");
        } else if (years_of_contribution >= 20 && total_saved >= 50000) {
            printf("Retirement Plan: Partial plan with medium pension\n");
        }
    } else {
        printf("Retirement Plan: Savings plan not yet available\n");
    }

    if (total_saved > 50000) {
        bonus = (total_saved - 50000) / 10000 * 0.05 * (total_saved - 50000);
    }

    final_amount = total_saved + bonus;

    printf("Total amount saved (including bonuses): %.2f€\n", final_amount);

    return 0;
}
