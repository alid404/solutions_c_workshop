#include <stdio.h>

int main() {

        int x, y, z;
        printf("enter your Performance score (from 0 to 100): ");
            scanf("%d",&x);
        printf("enter your Seniority (in years): ");
            scanf("%d",&y);
        printf("enter your Awards received (0 for none, 1 for one, 2 for two or more) ");
            scanf("%d",&z);
        
        if(x >= 90 && y >= 5 )
                printf("Excellent");
        else if(x >= 75 && y >= 3)
                printf("Good");
        else if(x >= 50 && y < 3)
                printf("Satisfactory");
        else 
                printf("Insufficient\n");
                
        if(z == 1 && x > 50)
                printf(" + 10%% bonus\n");
        else if(z == 2 && x > 50)
                printf(" + 20%% bonus\n");

    return 0;
}
