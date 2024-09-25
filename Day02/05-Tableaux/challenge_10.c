#include <stdio.h>

int main() {
    int x;
    printf("Enter the number of elements in the original array: ");
    scanf("%d", &x);

    int array[x];
    for (int i = 0; i < x; i++) {
        printf("Enter one element: ");
        scanf("%d", &array[i]);
    }
    
    int n;
printf("Enter the element you are searching for in the array: ");
scanf("%d",&n);
    int i = 0;
    while(i < x){
        if(array[i] == n){
        printf("the element you are searching for is present at the posotion number %d of the array\n",i+1);
            return 0;
        }
        i++;
    }
    
    printf("the element you are searching for in the arrayis not present\n");
    
    return 0;
}