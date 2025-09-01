#include "Cat.hpp"

// Default constructor
Cat::Cat() {
    type = "Cat"; // Set the type to "Cat"
    std::cout << "Cat default constructor called.\n";
}

// Copy constructor
Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy constructor called.\n";
}

// Copy assignment operator
Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other); // Call base class assignment operator
    }
    std::cout << "Cat assignment operator called.\n";
    return *this;
}

// Virtual destructor
Cat::~Cat() {
    std::cout << "Cat virtual destructor called.\n";
}

// Override the virtual function makeSound
void Cat::makeSound() const {
    std::cout << "Meow Meaow!\n";
}
