#include <stdio.h>
#include "contacts.h"

int main(void) {
    int num = 0, choice, firstRun = 1;

    printf("How many contacts you want to enter: ");
    scanf("%d", &num);
    getchar();

    contact users[num]; 
    Add(users, num);
    sortContacts(users, num); 
    display(users, num);

    do {
        if (firstRun) {
            printf("Contacts have been entered.\n");
            firstRun = 0;
        } else {
            printf("Enter 1 to Add more contacts, 2 to search for a contact, 3 to display all contacts, Enter another number to exit: ");
            scanf("%d", &choice);
            getchar();

            if (choice == 1) {
                int additionalContacts; 
                printf("How many additional contacts do you want to add: ");
                scanf("%d", &additionalContacts);
                getchar();
                printf("Contacts have been added.\n");
                Add(users + num, additionalContacts);
                num += additionalContacts;

                sortContacts(users, num); 
                display(users, num);
            } else if (choice == 2) {
                contact* user = search(users, num); 
                if (user) {
                    printf("Name: %s, Phone number: %s, Email address: %s\n", 
                           user->name, user->phone_number, user->email_address);

                    printf("Enter 1 to modify the user information OR 2 to remove it: ");
                    int x;
                    scanf("%d", &x);
                    getchar();
                    if (x == 1) {
                        update(user); 
                    } else if (x == 2) {
                        num = Delete(users, user, &num); 
                        sortContacts(users, num); 
                        display(users, num);
                    }
                }
            } else if (choice == 3) {
                display(users, num);
            } else {
                printf("Exiting...\n");
                break;
            }
        }
    } while (1);

    return 0;
}
