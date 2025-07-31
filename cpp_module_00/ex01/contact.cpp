#include <iostream>
#include <string>
#include "contact.hpp"

Contact::Contact() {
    // Constructor implementation
}

Contact::~Contact() {
    // Destructor implementation
}

void Contact::setFirstName(std::string& firstName) {
    this->firstName = firstName;
}

void Contact::setLastName(std::string& lastName) {
    this->lastName = lastName;
}

void Contact::setNickname(std::string& nickname) {
    this->nickname = nickname;
}

void Contact::setDarkestSecret(std::string& darkestSecret) {
    this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() {
    return firstName;
}

std::string Contact::getLastName() {
    return lastName;
}

std::string Contact::getNickname() {
    return nickname;
}

std::string Contact::getPhoneNumber() {
    return phoneNumber;
}
void Contact::displayContact() {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
}
void Contact::clear() {
    firstName.clear();
    lastName.clear();
    nickname.clear();
    phoneNumber.clear();
    darkestSecret.clear();
}
void Contact::setPhoneNumber(std::string& phoneNumber) {
    this->phoneNumber = phoneNumber;
}