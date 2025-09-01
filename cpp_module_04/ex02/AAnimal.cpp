#include "AAnimal.hpp"

// Default constructor
AAnimal::AAnimal() : type("Animal") {
    std::cout << "Animal default constructor called.\n";
}

// Copy constructor
AAnimal::AAnimal(const AAnimal& other) : type(other.type) {
    std::cout << "Animal copy constructor called.\n";
}

// Copy assignment operator
AAnimal& AAnimal::operator=(const AAnimal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "Animal assignment operator called.\n";
    return *this;
}

// Virtual destructor
AAnimal::~AAnimal() {
    std::cout << "Animal virtual destructor called.\n";
}

// Virtual function to be overridden
void AAnimal::makeSound() const {
    std::cout << "Generic animal sound\n";
}

std::string AAnimal::getType() const {
    return type;
}
