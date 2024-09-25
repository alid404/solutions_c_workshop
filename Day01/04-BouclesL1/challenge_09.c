#include <stdio.h>

int main() {
    int n;
    int count = 1;
    printf("enter a number : ");
    scanf("%d",&n);
    
    int x = n;
    while(x > 10){
        x = x / 10;
        count++;
    }
    
    printf("Number of digit in %d is %d\n", n ,count);
    
    return 0;
    
}