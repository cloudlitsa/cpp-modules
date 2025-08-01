#include <iostream>
#include <string>
#include "phonebook.hpp"

int main() {
    PhoneBook phoneBook;
    std::string command;
    std::cout << "This is your PhoneBook!" << std::endl;
    std::cout << "You can store up to 8 contacts." << std::endl;
    std::cout << "Type <ADD> to add a contact." << std::endl;
    std::cout << "Type <SEARCH> to search for a contact." << std::endl;
    std::cout << "Type <EXIT> to exit the program." << std::endl;
    
    while (true) {
        std::cout << "Enter command: ";

        if (!std::getline(std::cin, command)) {
        std::cout << "No input - exiting." << std::endl;
        break;
        }
        if (command == "ADD") {
        phoneBook.addContact();
        } else if (command == "SEARCH") {
        phoneBook.searchContacts();
        } else if (command == "EXIT") {
        std::cout << "Exiting PhoneBook. Goodbye!" << std::endl;
        break;
        } else {
        std::cout << "Invalid command. Please type <ADD>, <SEARCH>, or <EXIT>." << std::endl;
        }
    }
    
    return 0;
}
   