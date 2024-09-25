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
    int max = array[0];
    while(j < x){
        if(max < array[j]){
            max = array[j];
        }
        printf("%d",array[j]);
        if(j < x-1){
            printf(", ");
        }
        j++;
    }
    printf("\nthe largest element of the array is %d.\n",max);

    return 0;
}