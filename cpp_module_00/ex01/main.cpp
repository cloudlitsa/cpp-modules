#include <iostream>
#include <string>
#include "PhoneBook.hpp"

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
        if (command == "ADD" || command == "add") {
        PhoneBook.addContact();
        } else if (command == "SEARCH" || command == "search") {
        PhoneBook.searchContacts();
        } else if (command == "EXIT" || command == "exit") {
        std::cout << "Exiting PhoneBook. Goodbye!" << std::endl;
        break;
        } else {
        std::cout << "Invalid command. Please type <ADD>, <SEARCH>, or <EXIT>." << std::endl;
        }
    }
    
    return 0;
}
   