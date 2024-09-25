#include <stdio.h>

int main() {

        int x, y, z;
        printf("enter your Employee status (0 for part-time, 1 for full-time): ");
        scanf("%d",&x);
        printf("enter your Total leave days granted): ");
        scanf("%d",&y);
        printf("enter your Number of leave days used: ");
        scanf("%d",&z);
        
       if(x == 1)
                printf("Remaining days are %d.",y - z);
        else if(x == 0)
                printf("Remaining days are %d.",y/2 - z);
                
        if(z > y)
                printf("ALERT YOU HAVE EXCEEDED YOUR LIMIT");
                
    return 0;
}
