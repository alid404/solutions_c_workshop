#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main() {
    
    Point p = {12,32};
    printf("Point coordinates: x = %d, y = %d\n", p.x, p.y);

    Point *ptr = &p;

    ptr->x = 5;
    ptr->y = 10;

    printf("Modified Point coordinates: x = %d, y = %d\n", ptr->x, ptr->y);
    
    return 0;
}
