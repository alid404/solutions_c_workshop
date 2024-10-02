#include <stdio.h>

typedef struct data{
    char name[100];
    char surname[100];
    int grades[150];
} info;

int main() {
    info per1 = {"kagami", "light", {11, 14, 16, 16, 18, 13}};
    
    printf("name: %s, surname: %s\n", per1.name, per1.surname);
    
    printf("grades: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", per1.grades[i]);
    }
    
    return 0;
}