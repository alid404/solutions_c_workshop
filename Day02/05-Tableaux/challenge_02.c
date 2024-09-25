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
    while(j < x){
        printf("%d",array[j]);
        if(j < x-1){
            printf(", ");
        }
        j++;
    }

    return 0;
}