#include <stdio.h>

int main() {
    int day, month, year;
    
    printf("Enter the date in the format dd/mm/yyyy: ");
    
    scanf("%d/%d/%d", &day, &month, &year);
    
    printf("%d-", day);
    
    if (month == 1)
        printf("January");
    else if (month == 2)
        printf("February");
    else if (month == 3)
        printf("March");
    else if (month == 4)
        printf("April");
    else if (month == 5)
        printf("May");
    else if (month == 6)
        printf("June");
    else if (month == 7)
        printf("July");
    else if (month == 8)
        printf("August");
    else if (month == 9)
        printf("September");
    else if (month == 10)
        printf("October");
    else if (month == 11)
        printf("November");
    else if (month == 12)
        printf("December");

    printf("-%d\n", year);

    return 0;
}