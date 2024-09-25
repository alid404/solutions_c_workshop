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
    
    i = 0;
    printf("the elements of the orginal array are : ");
    while(i < x){
        printf("%d",array[i]);
        if(i < x-1){
            printf(", ");
        }
        i++;
    }
    
    int j = 0;
    int array2[x];
    while(j < x){
        array2[j] = array[j]; 
        j++;
    }
    
    i = 0;
    printf("\nthe elements of the copied array are : ");
    while(i < x){
        printf("%d",array2[i]);
        if(i < x-1){
            printf(", ");
        }
        i++;
    }
    
    return 0;
}