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

        int i = 0;
        int count = 0;
        printf("the even element of the array are : ");
        while(i < x){
            if(array[i] % 2 == 0){
                if(count > 0){
                printf(", ");
            }
                printf("%d",array[i]);
                count++;
            }
            i++;
        }
    
    printf("\n");
    return 0;
}