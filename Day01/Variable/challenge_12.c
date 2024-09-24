#include <stdio.h>

int main() {
  
    int x;
    printf("Enter a four-digit number: ");
    scanf("%d", &x);
  
    printf("%d",x%10);
    x = x / 10;
    printf("%d",x%10);
    x = x / 10;
    printf("%d",x%10);
    x = x / 10;
    printf("%d",x%10);

    return 0;
}