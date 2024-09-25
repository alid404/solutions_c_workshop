#include <stdio.h>

int main() {
    int x;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &x);

    int array[x];
    for (int i = 0; i < x; i++) {
        printf("Enter one element: ");
        scanf("%d", &array[i]);
    }

    int i = x - 1; 
    printf("The elements of the reversed array are: ");
    
    while (i >= 0) {
        printf("%d", array[i]);
        if (i >= 1) {
            printf(", ");
        }
        i--;
    }
    
    printf("\n");
    return 0;
}