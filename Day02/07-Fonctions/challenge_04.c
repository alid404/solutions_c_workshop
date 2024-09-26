#include <stdio.h>

int ft_compare(int a, int b){
    if(a <= b)
        return a;
    else if(a > b)
        return b;
}

int main() {
    int a = 2, b = 1;
    printf("the smallest number is %d\n",ft_compare(a,b));
    return 0; 
}
