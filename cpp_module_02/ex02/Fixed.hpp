#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath> // for roundf

class Fixed {
private:
    int _rawValue;
    static const int _fractionalBits = 8;

public:
// orthodox canonical form
    Fixed(); // default constructor
    Fixed(const Fixed& other); // copy constructor
    Fixed& operator=(const Fixed& other); // copy assignment operator
    ~Fixed(); // destructor

    Fixed(const int value); // constructor from int
    Fixed(const float value); // constructor from float

    float toFloat() const; // convert to float
    int toInt() const; // convert to int

    // getters and setters for raw value
    int getRawBits(void) const;
    void setRawBits(int const raw);

    // comparison operators
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator>(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;

    // arithmetic operators
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    // increment and decrement operators
    Fixed& operator++(); // pre-increment
    Fixed operator++(int); // post-increment
    Fixed& operator--(); // pre-decrement
    Fixed operator--(int); // post-decrement

    // static member functions for min and max
    static Fixed& min(Fixed& a, Fixed& b); // returns the minimum of two Fixed objects
    static const Fixed& min(const Fixed& a, const Fixed& b); // returns the minimum of two Fixed objects (const version)
    static Fixed& max(Fixed& a, Fixed& b); // returns the maximum of two Fixed objects
    static const Fixed& max(const Fixed& a, const Fixed& b); // returns the maximum of two Fixed objects (const version)
};
// overload insertion operator 
// (overload to define how the object is printed, eg std::cout << fixed;)
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif