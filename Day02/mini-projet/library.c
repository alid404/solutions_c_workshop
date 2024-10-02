#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "library.h"

void Add(library books[], int num) {
    for (int i = 0; i < num; i++) {
        printf("Enter the title of book %d: ", i + 1);
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = 0;

        printf("Enter the author of book %d: ", i + 1);
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0;

        printf("Enter the price of book %d: ", i + 1);
        while (scanf("%f", &books[i].price) != 1) {
            printf("Invalid input. Please enter a valid price: ");
            while (getchar() != '\n');
        }

        printf("Enter its quantity: ");
        while (scanf("%d", &books[i].quantity) != 1) {
            printf("Invalid input. Please enter a valid quantity: ");
            while (getchar() != '\n');
        }
        getchar(); // Clear the newline character from the input buffer
    }
    printf("New books have been added\n");
}

void display(library books[], int num) {
    for (int i = 0; i < num; i++) {
        char titleLower[150];
        char authorLower[150];

        strcpy(titleLower, books[i].title);
        strcpy(authorLower, books[i].author);

        toLowerCase(titleLower);
        toLowerCase(authorLower);

        printf("%d. Title: %s, Author: %s, Price: %.2f, Quantity: %d\n", 
               i + 1, titleLower, authorLower, books[i].price, books[i].quantity);
    }
}

library* search(library books[], int num) {
    char title[150];
    printf("Enter the title of the book: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = 0;

    for (int i = 0; i < num; i++) { 
        if (strcasecmp(books[i].title, title) == 0) {
            return &books[i]; 
        }
    }
    printf("Book not found\n");
    return NULL;
}

void update(library* book) { 
    printf("The current book quantity is %d\n", book->quantity);
    printf("Enter the new quantity: ");
    scanf("%d", &book->quantity);
    
    printf("Book has been modified\n");
}

int Delete(library books[], library* bookToDelete, int *num) { 
    if (bookToDelete != NULL) {
        for (int i = 0; i < *num; i++) {
            if (&books[i] == bookToDelete) {
                for (int j = i; j < *num - 1; j++) {
                    books[j] = books[j + 1];
                }
                printf("Book has been deleted\n");
                (*num)--;
                break;
            }
        }
    }
    return *num; 
}

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}
