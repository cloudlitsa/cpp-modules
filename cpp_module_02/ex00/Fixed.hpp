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
    
    // Member functions
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif