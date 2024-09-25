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

       int i = 0, sum =0;
       while(i < x){
           sum += array[i];
           i++;
       }
       
    printf("the avrage of the array elements is %d\n",sum);
       
    printf("\n");
    return 0;
}


