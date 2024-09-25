#include <stdio.h>

int main() {

        int x, y, z;
        printf("enter your Driver's age (in years): ");
        scanf("%d",&x);
        printf("enter your Car type (1 for sports, 2 for utility, 3 for family): ");
        scanf("%d",&y);
        printf("enter your Number of accidents in the past 5 years: ");
        scanf("%d",&z);
        
       if(x < 25)
                printf("Base premium * 1.5 ");
        else if(x >= 25 && x <= 65)
                printf("Base premium ");
        else if( x > 65)
                printf("Base premium * 1.2 ");
        
        if(y == 1)
                printf("+ premium * 2 ");
        else if(y == 2)
                printf("+ premium * 1.2 ");
        else if(y == 3)
                printf("+ premium * 1.1 ");
                
        if(z > 1)
            printf("+ 30%% premium\n");
                
    return 0;
}

