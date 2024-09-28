#include <stdio.h>

int main() {

    char s[100];
    printf("enter a string of characters : ");
    fgets(s,sizeof(s),stdin);
    
    int i = 0;
    while(s[i]){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 32;
        }
     i++;
    } 
    printf("the string you have entered is %s",s);

    return 0;
}