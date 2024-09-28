#include <stdio.h>

char *ft_reverse(char *s){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    
    i--;
    int j = 0;
    while(j <= i/2){
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        j++;
        i--;
    }
    return s;
}

int main() {
    char string[100];
    printf("enter a word : ");
    scanf("%s",string);
    printf("%s\n",ft_reverse(string));
    return 0; 
}