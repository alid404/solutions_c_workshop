#ifndef CONTACTS_H
#define CONTACTS_H

typedef struct contact {
    char name[100];
    char phone_number[100];
    char email_address[100]; 
} contact;

void Add(contact user[], int num);
void display(contact user[], int num);
contact* search(contact user[], int num);
void update(contact* user);
int Delete(contact user[], int *num);
void sortContacts(contact user[], int num); 

#endif
