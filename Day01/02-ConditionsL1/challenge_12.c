#include <stdio.h>

int main() {
    int h1, m1, s1, h2, m2, s2;
    
    printf("Enter the first moment (hh:mm:ss): ");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    
    printf("Enter the second moment (hh:mm:ss): ");
    scanf("%d:%d:%d", &h2, &m2, &s2);
    
    if (h1 == h2 && m1 == m2 && s1 == s2) {
        printf("It is the same instant\n");
    } else if (h1 < h2 || (h1 == h2 && (m1 < m2 || (m1 == m2 && s1 < s2)))) {
        printf("The first instant comes before the second\n");
    } else {
        printf("The second instant comes before the first\n");
    }

    return 0;
}
