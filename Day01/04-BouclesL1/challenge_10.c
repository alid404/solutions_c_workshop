#include <stdio.h>

int main(){
        
        int n, sum;
        printf("enter an integer : ");
        scanf("%d",&n);
        
        int x = n;
        while(x > 0){
            sum += x;
            x--;
        }
        
 printf("the sum of the first %d natural numbers is %d\n",n,sum);
        
       return 0; 
    }