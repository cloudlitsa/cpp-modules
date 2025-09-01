#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal default constructor called.\n";
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << "WrongAnimal copy constructor called.\n";
}

// Copy assignment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "WrongAnimal assignment operator called.\n";
    return *this;
}

// Virtual destructor
WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal virtual destructor called.\n";
}

// Virtual function to be overridden
void WrongAnimal::makeSound() const {
    std::cout << "Kakophony.\n";
}

std::string WrongAnimal::getType() const {
    return type;
}
