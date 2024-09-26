#include <stdio.h>

int ft_compare(int a, int b){
    if(a >= b)
        return a;
    else if(a < b)
        return b;
}

int main() {
    int a = 5, b = 5;
    printf("the largest number is %d\n",ft_compare(a,b));
    return 0; 
}