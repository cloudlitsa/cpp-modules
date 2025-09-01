#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat() {
    type = "WrongCat"; // Set the type to "WrongCat"
    std::cout << "WrongCat default constructor called.\n";
}

// Copy constructor
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << "WrongCat copy constructor called.\n";
}

// Copy assignment operator
WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other) {
        WrongAnimal::operator=(other); // Call base class assignment operator
    }
    std::cout << "WrongCat assignment operator called.\n";
    return *this;
}

// Virtual destructor
WrongCat::~WrongCat() {
    std::cout << "WrongCat virtual destructor called.\n";
}

// Override the virtual function makeSound
void WrongCat::makeSound() const {
    std::cout << "Swizzle-wizzle!\n";
}
