#include <stdio.h>

typedef struct data{
    float length;
    float width;
} rectangle;

float area(rectangle* rec);

int main() {
    rectangle rec = {22,56};
    
printf("length: %.02f, width: %.02f\n", rec.length, rec.width);
     
     printf("the area of this rectangle is %.02f",area(&rec));
    
    return 0;
}


float area(rectangle* rec){
    
    return rec->length*rec->width;
}







