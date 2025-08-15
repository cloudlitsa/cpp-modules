#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _rawValue;                          // Stores the fixed-point value
    static const int _fractionalBits = 8;   // Number of fractional bits

public:
    // Orthodox Canonical Form
    Fixed();                                // Default constructor
    Fixed(const Fixed& other);              // Copy constructor
    Fixed& operator=(const Fixed& other);   // Copy assignment operator
    ~Fixed();                               // Destructor

    // more constructors
    Fixed(const int value);              // Constructor from int
    Fixed(const float value);            // Constructor from float

    // conversion functions
    float toFloat() const;               // Convert to float
    int toInt() const;                   // Convert to int

    // Member functions
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

// Overload the insertion operator for easy output
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif