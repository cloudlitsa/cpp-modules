#include <iostream>
#include <string>
#include <iomanip> // For std::setw
#include "phonebook.hpp"
#include "contact.hpp"

PhoneBook::PhoneBook() : nextIndex(0), contactCount(0) {
    // Constructor implementation
}

PhoneBook::~PhoneBook() {
    // Destructor implementation
}

void PhoneBook::addContact() {
    std::cout << "Adding a new contact..." << std::endl;
    Contact newContact = createContactFromInput();
    contacts[nextIndex] = newContact;

    if (contactCount < 8) {
        contactCount++;
    } 
    
    nextIndex = (nextIndex + 1) % 8;  // Wrap around if we reach the end of the array
    if (contactCount == 8 && nextIndex == 0) {
        std::cout << "PhoneBook is full. Oldest contact will be replaced." << std::endl;
    } else {
        std::cout << "Contact added successfully!" << std::endl;
    }
}

void PhoneBook::searchContact(std::string& name) {
    if (contactCount == 0) {
        std::cout << "No contacts available." << std::endl;
        return;
    }

    displayContactsTable();

    std::cout << "Enter the index of the contact you want to view: ";
    std::string input;
    std::getline(std::cin, input);
    if (input.length() == 1 && input[0] >= '1' && input[0] <= '8') {
        int index = input[0] - '1'; // Convert char to int and 1 to 0 index
        if (isValidIndex(index)) {
            displayContactAtIndex(index);
        } else {
            std::cout << "No contact at this index." << std::endl;
        }
    } else {
        std::cout << "Please enter a valid index." << std::endl;
    }
}
//private helper: create a contact from user input
Contact PhoneBook::createContactFromInput() {
    Contact contact;
    std::string input;

    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "First name cannot be empty." << std::endl;
    }
    contact.setFirstName(input);

    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Last name cannot be empty." << std::endl;
    }
    contact.setLastName(input);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Nickname cannot be empty." << std::endl;
    }
    contact.setNickname(input);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Phone number cannot be empty." << std::endl;
    }
    contact.setPhoneNumber(input);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Darkest secret cannot be empty." << std::endl;
    }
    contact.setDarkestSecret(input);

    return contact;
}
// private helper: display all contacts in a formatted table
void PhoneBook::displayContactsTable() {
   
    for (int i = 0; i < contactCount; ++i) {
        std::cout << " | " << std::setw(10) << (i + 1) << " | "
                  << std::setw(10) << contacts[i].getTruncatedField(contacts[i].getFirstName()) << " | "
                  << std::setw(10) << contacts[i].getTruncatedField(contacts[i].getLastName()) << " | "
                  << std::setw(10) << contacts[i].getTruncatedField(contacts[i].getNickname())
                  << std::endl;
    }
}

// private helper: display detailed info for a specific contact
void PhoneBook::displayContactAtIndex(int index) {
    std::cout << "Contact Details:" << std::endl;
    contacts[index].displayFullInfo();
    std::cout << std::endl;
}

// private helper: formats string for table display
bool PhoneBook::isValidIndex(int index) {
    return index >= 0 && index < contactCount;
}

// private helper: formats string for table display
std::string PhoneBook::formatStringForTable(const std::string& field) {
    if (field.length() > 10) {
        return field.substr(0, 9) + "."; // Truncate and add ellipsis
    }
    return field;
}
