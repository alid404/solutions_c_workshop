#include <stdio.h>

int main() {

        int x, i,sum;
        printf("enter a number: ");
        scanf("%d",&x);
        
        for(i = 1;i <= 10;i++){
            sum += x*i;
            printf("%d * %d = %d\n",x, i, x * i);
        }
        
        printf("the sum of the products is %d\n",sum);
        
    return 0;
}
