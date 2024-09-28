#include <stdio.h>

int main() {
    char s[] = "Death Parade";
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    
    printf("the length of the array is %d\n",i-1);
    

    return 0;
}
