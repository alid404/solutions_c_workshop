#include <stdio.h>

int main() {

        int x, y, z;
        printf("enter your Annual income (in euros): ");
        scanf("%d",&x);
        printf("enter your Credit score (out of 1000): ");
        scanf("%d",&y);
        printf("enter your Loan duration (in years): ");
        scanf("%d",&z);
        
        if(x >= 30000 && y >= 700 && z <= 10)
            printf("Eligible\n");
         else if(x >= 30000 && y >= 650 && z <= 15)
            printf("Conditionally Eligible\n");
         else if(x < 30000 || y < 650 || z > 15)
            printf("Not Eligible\n");
        
    return 0;
}