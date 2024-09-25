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

        int y, z;
    printf("Enter the value you want to replace : ");
    scanf("%d",&y);
    printf("Enter the new value : ");
    scanf("%d",&z);
    
    int i = 0;
    printf("the new elements of the array are : ");
    while (i < x) {
        if (array[i] == y) {
            array[i] = z;
        }
        printf("%d",array[i]);
        if(i < x - 1){
            printf(", ");
        }
        i++;
    }
    
    printf("\n");
    return 0;
}
