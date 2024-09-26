#include <stdio.h>

int main() {
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    
    while(n > 10){
        printf("%d",n % 10);
        n = n / 10;
    }
    printf("%d\n",n);
    
    return 0;
    
}