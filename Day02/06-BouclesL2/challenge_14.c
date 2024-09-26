#include <stdio.h>

int main() {
    int day, x;
    printf("1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n6. Saturday\n7. Sunday\n");
    printf("Enter the number of the day between 1 and 7: ");
    scanf("%d", &x);

    if (x < 1 || x > 7) {
        printf("The day you have entered doesn't exist.\n");
        return 1; 
    }

    for (day = x; day <= 7; day++) {
        switch(day) {
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            case 7:
                printf("Sunday\n");
                break;
        }
    }

    return 0;
}