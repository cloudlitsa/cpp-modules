#ifndef CONTACT_HPP
#define CONTACT_HPP

#include<iostream>
#include<string>

class Contact {
private:
    int index; // Index of the contact in the phonebook
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
public:
    Contact(); // Constructor
    ~Contact(); // Destructor
// Setters
    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setNickname(const std::string& nickname);
    void setPhoneNumber(const std::string& phoneNumber);
    void setDarkestSecret(const std::string& darkestSecret);
// Getters
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;
// Display methods
    void displayFullInfo() const;
    std::string getTruncatedField(const std::string& field) const;
    bool isEmpty() const;
};

#endif