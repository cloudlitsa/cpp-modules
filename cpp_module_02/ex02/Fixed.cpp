#include "Fixed.hpp"

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
    if (this != &other) {
        _rawValue = other._rawValue;
    }
    return *this;
}
// Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}
// Constructor from int
Fixed::Fixed(const int value) : _rawValue(value << _fractionalBits) {
    std::cout << "Int constructor called" << std::endl;
}
// Constructor from float
Fixed::Fixed(const float value) : _rawValue(static_cast<int>(roundf(value * (1 << _fractionalBits)))) {
    std::cout << "Float constructor called" << std::endl;
}
// Convert to float
float Fixed::toFloat() const {
    return static_cast<float>(_rawValue) / (1 << _fractionalBits);
}
// Convert to int
int Fixed::toInt() const {
    return _rawValue >> _fractionalBits;
}
// Get raw bits
int Fixed::getRawBits(void) const {
    return _rawValue;
}
// Set raw bits
void Fixed::setRawBits(int const raw) {
    _rawValue = raw;
}
// Comparison operators
bool Fixed::operator == (const Fixed& other) const {
    return _rawValue == other._rawValue;
}
bool Fixed::operator != (const Fixed& other) const {      
    return _rawValue != other._rawValue;
}
bool Fixed::operator < (const Fixed& other) const {
    return _rawValue < other._rawValue;
}
bool Fixed::operator <= (const Fixed& other) const 
{
    return _rawValue <= other._rawValue;
}
bool Fixed::operator>(const Fixed& other) const {
    return _rawValue > other._rawValue;
}
bool Fixed::operator>=(const Fixed& other) const {
    return _rawValue >= other._rawValue;
}
// Arithmetic operators
Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result._rawValue = _rawValue + other._rawValue;
    return result;
}
Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result._rawValue = _rawValue - other._rawValue;
    return result;
}
Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    result._rawValue = static_cast<int>(static_cast<long long>(_rawValue) * other._rawValue >> _fractionalBits);
    return result;
}
Fixed Fixed::operator/(const Fixed& other) const {
    if (other._rawValue == 0) {
        throw std::runtime_error("Division by zero");
    }
    Fixed result;
    result._rawValue = static_cast<int>(static_cast<long long>(_rawValue) << _fractionalBits / other._rawValue);
    return result;
}
// Pre-increment operator
Fixed& Fixed::operator++() {
    _rawValue++;
    return *this;
}
// Post-increment operator
Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    _rawValue++;
    return temp;
}
// Pre-decrement operator
Fixed& Fixed::operator--() {
    _rawValue--;
    return *this;
}
// Post-decrement operator
Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    _rawValue--;
    return temp;
}
// Static member functions for min and max
Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}
// Static member functions for min and max (const version)
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}
// Static member functions for max
Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}
// Static member functions for max (const version)
const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}
// Overload insertion operator
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}
