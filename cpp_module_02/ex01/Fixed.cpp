#include "Fixed.hpp"
#include <cmath>

// Default constructor initializes _rawValue to 0
Fixed::Fixed() : _rawValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Constructor from int converts to fixed-point representation
Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    this->_rawValue = value << _fractionalBits; // Shift left by fractional bits
}
// Constructor from float converts to fixed-point representation
Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    // Multiply by 2^fractionalBits(256) and round to nearest integer
    this->_rawValue = roundf(value * (1 << _fractionalBits)); // 1 << 8(_fractionalBits) is 256 (1 shifted left by 8 bits)
}
// Copy constructor
Fixed::Fixed(const Fixed& other) : _rawValue(other._rawValue) {
    std::cout << "Copy constructor called" << std::endl;
}
// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        _rawValue = other._rawValue;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

// Destructor, in this case, no dynamic memory is used, but we still provide an implementation.
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}
// Convert fixed-point value to float
float Fixed::toFloat() const {
    return static_cast<float>(_rawValue) / (1 << _fractionalBits); // Divide by 256 (1 << 8)
    // static_cast<float>(_rawValue)
    // is more explicit, easier to find in code reviews, 
    // and helps prevent accidental or unsafe conversions. 
}
// Convert fixed-point value to int
int Fixed::toInt() const {  
    return _rawValue >> _fractionalBits; // Shift right by fractional bits to get the integer part
}
// Get raw bits
int Fixed::getRawBits(void) const {
    return _rawValue;
}
// Set raw bits
void Fixed::setRawBits(int const raw) {
    _rawValue = raw;
}
// Overload the insertion operator for easy output
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat(); // Use toFloat() for output, because it provides a human-readable format
    return out;
}
// This allows us to print the fixed-point value as a float
    // instead of the raw integer representation.
    // useful for debugging and displaying fixed-point values in a human-readable format.
// This allows us to print Fixed objects directly using std::cout
// Example: std::cout << fixedObject;
// This is useful for debugging and displaying fixed-point values in a human-readable format.
// The operator<< function is defined outside the class to allow for better separation of concerns 
// and cleaner code organization.
// It takes an ostream reference and a Fixed object, converts the Fixed object to float using