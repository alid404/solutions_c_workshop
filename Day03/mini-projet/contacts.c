#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "contacts.h"

void Add(contact user[], int num) {
    for (int i = 0; i < num; i++) {
        printf("Enter the name of user %d: ", i + 1);
        fgets(user[i].name, sizeof(user[i].name), stdin);
        user[i].name[strcspn(user[i].name, "\n")] = 0; 
        
        printf("Enter the phone number of user %d: ", i + 1);
        fgets(user[i].phone_number, sizeof(user[i].phone_number), stdin);
        user[i].phone_number[strcspn(user[i].phone_number, "\n")] = 0; 
        
        printf("Enter the email address of user %d: ", i + 1);
        fgets(user[i].email_address, sizeof(user[i].email_address), stdin);
        user[i].email_address[strcspn(user[i].email_address, "\n")] = 0; 
    }
}

void display(contact user[], int num) {
    for (int i = 0; i < num; i++) {
        printf("%d. Name: %s, Phone number: %s, Email address: %s\n", 
               i + 1, user[i].name, user[i].phone_number, user[i].email_address);
    }
}

contact* search(contact user[], int num) {
    char name[100];
    printf("Enter the name of the user: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    for (int i = 0; i < num; i++) { 
        if (strcasecmp(user[i].name, name) == 0) {
            return &user[i]; 
        }
    }
    printf("User not found\n");
    return NULL;
}

void update(contact* user) {
    printf("The current phone number is %s\n", user->phone_number);
    printf("The email address is %s\n", user->email_address);
    
    printf("Enter the new phone number: ");
    fgets(user->phone_number, sizeof(user->phone_number), stdin);
    user->phone_number[strcspn(user->phone_number, "\n")] = 0;

    printf("Enter the new email address: ");
    fgets(user->email_address, sizeof(user->email_address), stdin);
    user->email_address[strcspn(user->email_address, "\n")] = 0;
}

int Delete(contact user[], int *num) {
    contact* userToDelete = search(user, *num);
    if (userToDelete != NULL) {
        for (int i = 0; i < *num; i++) {
            if (&user[i] == userToDelete) {
                for (int j = i; j < *num - 1; j++) {
                    user[j] = user[j + 1];
                }
                (*num)--; 
                break;
            }
        }
    }
    return *num; 
}

void sortContacts(contact user[], int num) {
    for (int i = 0; i < num - 1; i++) {
        for (int j = i + 1; j < num; j++) {
            if (strcasecmp(user[i].name, user[j].name) > 0) {
                contact temp = user[i];
                user[i] = user[j];
                user[j] = temp;
            }
        }
    }
}
