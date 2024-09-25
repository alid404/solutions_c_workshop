#include <stdio.h>

int main() {

    int x;
    printf("enter the number of elements in the array : ");
    scanf("%d",&x);

    int array[x];
    int i;
    for(i =0;i < x;i++){
        printf("enter one element : ");
        scanf("%d",&array[i]);
    }
    
    int j = 0;
    int sum = 0;
    while(j < x){
        printf("%d",array[j]);
        if(j < x-1){
            printf(", ");
        }
        sum += array[j];
        j++;
    }
    printf("\nthe sum of the array elements is %d.\n",sum);

    return 0;
}