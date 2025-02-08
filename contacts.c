#include "contact.h"

Contact contacts[MAX_CONTACTS];
int num_contacts = 0;

// Function implementations (add_contact, list_contacts, search_contacts, update_contact, delete_contact, save_contacts, load_contacts)
// ... (Implement these functions - similar logic to previous examples)

void add_contact(const char *name, const char *phone, const char *email) {
    if (num_contacts < MAX_CONTACTS) {
        strncpy(contacts[num_contacts].name, name, MAX_NAME_LENGTH - 1);
        strncpy(contacts[num_contacts].phone, phone, MAX_PHONE_LENGTH - 1);
        strncpy(contacts[num_contacts].email, email, MAX_EMAIL_LENGTH - 1);
        num_contacts++;
        printf("Contact added.\n");
    } else {
        printf("Contact list is full.\n");
    }
}

// ... Implement other functions (list_contacts, search_contacts, etc.)