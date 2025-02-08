#include "contacts.h"
#include "ui.h"

#define SAVE_FILENAME "contacts.txt"

int main() {
    load_contacts(SAVE_FILENAME); // Load at startup

    int choice;
    char name[MAX_NAME_LENGTH];
    char phone[MAX_PHONE_LENGTH];
    char email[MAX_EMAIL_LENGTH];
    char search_term[MAX_NAME_LENGTH];
    int index;


    do {
        display_menu();
        scanf("%d", &choice);
        getchar(); // Clear input buffer

        switch (choice) {
            case 1:
                printf("Enter name: ");
                fgets(name, MAX_NAME_LENGTH, stdin);
                name[strcspn(name, "\n")] = 0;
                printf("Enter phone: ");
                fgets(phone, MAX_PHONE_LENGTH, stdin);
                phone[strcspn(phone, "\n")] = 0;
                printf("Enter email: ");
                fgets(email, MAX_EMAIL_LENGTH, stdin);
                email[strcspn(email, "\n")] = 0;
                add_contact(name, phone, email);
                break;
            case 2:
                list_contacts();
                break;
            // ... other cases (search, update, delete, save, load, exit) ...
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 8);

    return 0;
}