#include <iostream>
#include <string>
#include "contact.hpp"

class PhoneBook {
private:
    Contact contacts[8]; // Allowed a maximum of 8 contacts
    int index; // Current index for adding new contacts
public:
    PhoneBook(); // Constructor
    ~PhoneBook(); // Destructor

    void addContact(Contact& contact);
    void displayContacts();
    void searchContact(const std::string& name) const;
};
