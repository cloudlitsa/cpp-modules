#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contacts.hpp"
#include <iostream>
#include <string>


class PhoneBook {
private:
    Contacts contacts[8]; // Allowed a maximum of 8 contacts
    int nextIndex; // where the next contact will be added (0-7 wraps around)
    int contactCount; // current number of contacts
public:
    PhoneBook(); // Constructor
    ~PhoneBook(); // Destructor

    void addContact(); // prompts user to add a contact
    void searchContacts(); // shows table of contacts and allows searching by name
private: // helper methods private because only phonebook needs them
    Contacts createContactFromInput(); // creates a contact from user input
    void displayContactsTable(); // displays all contacts in a formatted table
    void displayContactAtIndex(int index); // displays detailed info for a specific contact
    bool isValidIndex(int index); // checks if the index is valid
    std::string formatStringForTable(const std::string& field); // formats string for table display
};

#endif // PHONEBOOK_HPP