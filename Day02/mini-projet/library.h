#ifndef LIBRARY_H
#define LIBRARY_H

typedef struct book {
    char title[150];
    char author[150];
    int quantity;
    float price;
} library;

void Add(library books[], int num);
void display(library books[], int num);
library* search(library books[], int num);
void update(library* book); 
int Delete(library books[], library* bookToDelete, int *num); 
void toLowerCase(char *str);

#endif
