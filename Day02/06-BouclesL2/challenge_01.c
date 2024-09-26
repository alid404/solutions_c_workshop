#include <stdio.h>

int main() {

        int n;
        printf("enter a number : ");
        scanf("%d",&n);
        
        int i = 10;
        while(i >= 1){
            printf("%d * %d = %d\n",n,i,n*i);
            i--;
        }
    return 0;
}