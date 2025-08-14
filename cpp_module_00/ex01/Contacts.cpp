#include "Contacts.hpp"
#include <iomanip> // For std::setw
#include <iostream>
#include <string>

// Constructor is called when a Contact object is created
Contacts::Contacts() {
    // The string members are initialized to empty strings
}
// Destructor is called when a Contact object is destroyed
Contacts::~Contacts() {
    // cleanup code can be added here if needed
}
// setter methods to set the values of the private members

void Contacts::setFirstName(const std::string& firstName) {
    this->firstName = firstName; // 'this' pointer is used to refer to the current object
}

void Contacts::setLastName(const std::string& lastName) {
    this->lastName = lastName;
}

void Contacts::setNickname(const std::string& nickname) {
    this->nickname = nickname;
}

void Contacts::setPhoneNumber(const std::string& phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Contacts::setDarkestSecret(const std::string& darkestSecret) {
    this->darkestSecret = darkestSecret;
}
// getter methods to retrieve the values of the private members
std::string Contacts::getFirstName() const {
    return firstName;
}

std::string Contacts::getLastName() const{
    return lastName;
}

std::string Contacts::getNickname() const {
    return nickname;
}

std::string Contacts::getPhoneNumber() const {
    return phoneNumber;
}
void Contacts::displayFullInfo() const {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

std::string Contacts::getTruncatedField(const std::string& field) const{
    if (field.length() > 10) {
        return field.substr(0, 9) + "."; // Truncate and add ellipsis
    }
    return field;
}

bool Contacts::isEmpty() const {
    return firstName.empty() && lastName.empty() && nickname.empty() &&
           phoneNumber.empty() && darkestSecret.empty();
}