#include <stdio.h>

int main() {
    float x;
    int y, z;

    printf("Enter your budget (in euros): ");
    scanf("%f", &x);
    
    printf("Enter your destination (1 for beach, 2 for mountain, 3 for city): ");
    scanf("%d", &y);
    
    printf("Enter your number of people: ");
    scanf("%d", &z);
    
    if (x >= 1000) {
        printf("Premium trip");
        if (z > 2) {
            printf(" to the beach\n");
        } else {
            printf(" to the city\n"); 
        }
    } else if (x >= 500) {
        printf("Mid-range trip");
        if (z <= 2) {
            printf(" to the mountain\n");
        } else {
            printf(" to the city\n"); 
        }
    } else {
        printf("Budget trip to the city\n"); 
    }

    return 0;
}
