#include <stdio.h>

int main() {
    int x;
    printf("Enter the number of elements in the original array: ");
    scanf("%d", &x);

    int array[x];
    for (int i = 0; i < x; i++) {
        printf("Enter one element: ");
        scanf("%d", &array[i]);
    }

    int i, v, temp;
    for (i = 0; i < x - 1; i++) {  
        for (v = 0; v < x - i - 1; v++) { 
            if (array[v] > array[v + 1]) {
                temp = array[v];
                array[v] = array[v + 1];
                array[v + 1] = temp;
            }
        }
    }

    int j = 0;
    printf("The elements of the array are: ");
    while (j < x) {
        printf("%d", array[j]);
        if (j < x - 1) {
            printf(", ");
        }
        j++;
    }
    return 0;
}
