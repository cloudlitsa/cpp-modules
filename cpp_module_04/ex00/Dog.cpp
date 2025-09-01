#include "Dog.hpp"

// Default constructor
Dog::Dog() {
    type = "Dog"; // Set the type to "Dog"
    std::cout << "Dog default constructor called.\n";
}

// Copy constructor
Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "Dog copy constructor called.\n";
}

// Copy assignment operator
Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other); // Call base class assignment operator
    }
    std::cout << "Dog assignment operator called.\n";
    return *this;
}

// Virtual destructor
Dog::~Dog() {
    std::cout << "Dog virtual destructor called.\n";
}

// Override the virtual function makeSound
void Dog::makeSound() const {
    std::cout << "Woof Woof!\n";
}