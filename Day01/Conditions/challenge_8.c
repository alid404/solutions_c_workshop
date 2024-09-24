#include <stdio.h>

int main() {
    
    int x;
    
    printf("Enter your score: ");
    scanf("%d", &x);
    
    if (x < 0 || x > 20) {
        printf("Invalid score. Please enter a score between 0 and 20.\n");
    } else if (x < 10) {
        printf("Fail\n");
    } else if (x < 12) {
        printf("Passable\n");
    } else if (x < 14) {
        printf("Fairly Good\n");
    } else if (x < 16) {
        printf("Good\n");
    } else { 
        printf("Very Good\n");
    }

    return 0;
}


