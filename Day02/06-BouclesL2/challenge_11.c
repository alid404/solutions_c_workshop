#include <stdio.h>

int main() {

        int count, array[1000];
        float sum;
        printf("enter a series of number and enter 0 to exit: ");
        for(int i = 0;i < 1000;i++){
                scanf("%d",&array[i]);
                count++;
                sum += array[i];
            if(array[i] == 0){
                break;
            }
        }

        printf("the average is %.2f",sum/(count - 1));

    return 0;
}