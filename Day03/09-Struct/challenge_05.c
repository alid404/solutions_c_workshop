#include <stdio.h>
#include <string.h>

typedef struct {
    char title[150];
    char author[150];
    int year;
} library;

library createBook(const char *title, const char *author, int year) {
    library newBook;
    strcpy(newBook.title, title);
    strcpy(newBook.author, author);
    newBook.year = year;
    return newBook;
}

int main() {
    library book = createBook("Good Deal", "Kagami Light", 2020);

    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Year: %d\n", book.year);
    
    return 0;
}
