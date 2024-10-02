#include <stdio.h>
#include "library.h"

int main(void) {
    int num = 0, choice, firstRun = 1;

    printf("How many books do you want to enter: ");
    scanf("%d", &num);
    getchar();

    library books[num];
    Add(books, num);
    display(books, num);

    do {
        if (firstRun) {
            printf("Books have been entered.\n");
            firstRun = 0;
        } else {
            printf("Enter 1 to Add more books, 2 to search for a book, 3 to display all books, or another number to exit: ");
            scanf("%d", &choice);
            getchar();

            if (choice == 1) {
                int additionalBooks;
                printf("How many additional books do you want to add: ");
                scanf("%d", &additionalBooks);
                getchar();
                printf("Books have been added.\n");
                Add(books + num, additionalBooks);
                num += additionalBooks;
                display(books, num);
            } else if (choice == 2) {
                library* book = search(books, num);
                if (book) {
                    char titleLower[150];
                    char authorLower[150];

                    strcpy(titleLower, book->title);
                    strcpy(authorLower, book->author);

                    toLowerCase(titleLower);
                    toLowerCase(authorLower);

                    printf("Title: %s, Author: %s, Price: %.2f, Quantity: %d\n", 
                           titleLower, authorLower, book->price, book->quantity);

                    printf("Enter 1 to modify the book OR 2 to remove it: ");
                    int x;
                    scanf("%d", &x);
                    getchar();
                    if (x == 1) {
                        update(book); 
                    } else if (x == 2) {
                        num = Delete(books, book, &num); 
                        display(books, num);
                    }
                }
            } else if (choice == 3) {
                display(books, num);
            } else {
                printf("Exiting...\n");
                break;
            }
        }
    } while (1);

    return 0;
}
