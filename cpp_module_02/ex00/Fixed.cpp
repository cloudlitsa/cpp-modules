#include "Fixed.hpp"
#include <iostream>

// Default constructor
Fixed::Fixed() : _rawValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed& other) : _rawValue(other._rawValue) {
    std::cout << "Copy constructor called" << std::endl;
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {  // Self-assignment check
        this->_rawValue = other._rawValue;
    }
    return *this;
}

// Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Get raw bits
int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_rawValue;
}

// Set raw bits
void Fixed::setRawBits(int const raw) {
    this->_rawValue = raw;
}