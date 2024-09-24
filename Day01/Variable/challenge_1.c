#include <stdio.h>

int main() {

        int age;
        char first_name[30];
        char last_name[30];
        char gender[30];

        printf("enter your first name:");
        scanf("%s",first_name);
        printf("enter your last name:");
        scanf("%s",last_name);
        printf("enter your gender:");
        scanf("%s",gender);
        printf("enter your age:");
        scanf("%d",&age);
        
        
        printf("you're name is %s %s And you are %d %s",first_name,last_name,age,gender);
        
    return 0;
}