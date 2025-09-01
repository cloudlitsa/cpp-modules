#include "Animal.hpp"

// Default constructor
Animal::Animal() : type("Animal") {
    std::cout << "Animal default constructor called.\n";
}

// Copy constructor
Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal copy constructor called.\n";
}

// Copy assignment operator
Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "Animal assignment operator called.\n";
    return *this;
}

// Virtual destructor
Animal::~Animal() {
    std::cout << "Animal virtual destructor called.\n";
}

// Virtual function to be overridden
void Animal::makeSound() const {
    std::cout << "Generic animal sound\n";
}

std::string Animal::getType() const {
    return type;
}
