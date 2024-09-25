#include <stdio.h>

int main() {

    int x,factor;
    printf("enter the number of elements in the original array : ");
    scanf("%d",&x);

    
    int array[x];
    int i;
    for(i =0;i < x;i++){
        printf("enter one element : ");
        scanf("%d",&array[i]);
    }
    
    printf("enter the the multiplication factor : ");
    scanf("%d",&factor);
    
    int array2[x];
    i = 0;
    for(i =0;i < x;i++){
        array2[i] = array[i] * factor;
    }
    
    int j = 0;
    printf("the elements of the resulting array are : ");
    while(j < x){
        printf("%d",array2[j]);
        if(j < x-1){
            printf(", ");
        }
        j++;
    }
    return 0;
}