#include <stdio.h>

int main() {
    int x, y, z;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &x);
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &y);
    z = x + y; 

    int array1[x], array2[y], array_mix[z];
    
    for (int i = 0; i < x; i++) {
        printf("Enter one element for the first array: ");
        scanf("%d", &array1[i]);
        array_mix[i] = array1[i]; 
    }
    
    for (int j = 0; j < y; j++) {
        printf("Enter one element for the second array: ");
        scanf("%d", &array2[j]);
        array_mix[x + j] = array2[j];
    }
    
    printf("The elements of the merged array are: ");
    for (int v = 0; v < z; v++) { 
        printf("%d", array_mix[v]);
        if (v < z - 1) {
            printf(", ");
        }
    }
    
    printf("\n"); 
    return 0;
}
