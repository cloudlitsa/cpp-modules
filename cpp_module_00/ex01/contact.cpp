#include "contact.hpp"
#include <iomanip> // For std::setw
#include <iostream>
#include <string>

// Constructor is called when a Contact object is created
Contact::Contact() {
    // Ithe string members are initialized to empty strings
}
// Destructor is called when a Contact object is destroyed
Contact::~Contact() {
    // cleanup code can be added here if needed
}
// setter methods to set the values of the private members

void Contact::setFirstName(const std::string& firstName) {
    this->firstName = firstName; // 'this' pointer is used to refer to the current object
}

void Contact::setLastName(const std::string& lastName) {
    this->lastName = lastName;
}

void Contact::setNickname(const std::string& nickname) {
    this->nickname = nickname;
}

void Contact::setPhoneNumber(const std::string& phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string& darkestSecret) {
    this->darkestSecret = darkestSecret;
}
// getter methods to retrieve the values of the private members
std::string Contact::getFirstName() const {
    return firstName;
}

std::string Contact::getLastName() const{
    return lastName;
}

std::string Contact::getNickname() const {
    return nickname;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}
void Contact::displayFullInfo() const {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

std::string Contact::getTruncatedField(const std::string& field) const{
    if (field.length() > 10) {
        return field.substr(0, 9) + "."; // Truncate and add ellipsis
    }
    return field;
}

bool Contact::isEmpty() const {
    return firstName.empty() && lastName.empty() && nickname.empty() &&
           phoneNumber.empty() && darkestSecret.empty();
}