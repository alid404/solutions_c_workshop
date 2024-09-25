#include <stdio.h>

int main() {
    int age, medical_history, coverage_type;
    
    printf("Enter your Age: ");
    scanf("%d", &age);
    
    printf("Enter your Medical history (0 for no problems, 1 for minor problem, 2 for major problem): ");
    scanf("%d", &medical_history);
    
    printf("Enter your Coverage type (1 for basic, 2 for extended): ");
    scanf("%d", &coverage_type);
    
    if (age < 30) {
        printf("Health Plan: Basic plan\n");
    } else if (age >= 30) {
        if (medical_history == 0) {
            printf("Health Plan: Basic plan\n");
        } else {
            printf("Health Plan: Extended plan\n");
        }
    }
    
    if (medical_history == 2) {
        printf("Additional coverage for major medical problems included.\n");
    }
    
    return 0;
}