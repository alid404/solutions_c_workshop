#include <stdio.h>

int main() {
    char s[100];
    char c;
    printf("Enter a string of characters: ");
    fgets(s, sizeof(s), stdin);
    printf("enter the character you want to know its occurrence : ");
    scanf(" %c",&c);
    
    int i = 0, count = 0;
    while(s[i]){
        if(s[i] == c){
            count++;
        }
        i++;
    }

    printf("the character %c has occurred %d times in the string %s\n", c, count, s); 

    return 0;
}
