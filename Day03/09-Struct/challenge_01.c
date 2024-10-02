#include <stdio.h>

typedef struct data{
    char name[100];
    char surname[100];
    int age;
}info;

int main() {
    info per1 = {"kagami","light",21};
    printf("name: %s, surname: %s, age: %d\n",per1.name,per1.surname,per1.age);
    return 0;
}