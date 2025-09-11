#include "Cat.hpp"

// Default constructor
Cat::Cat() : brain(new Brain()) {
    type = "Cat"; // Set the type to "Cat"
    std::cout << "Cat with brain default constructor called.\n";
}

// Copy constructor
Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain)) {
    std::cout << "Cat with brain copy constructor called.\n";
}

// Copy assignment operator
Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other); // Call base class assignment operator
        // delete brain;
        // this->brain = new Brain;
        *brain = *(other.brain); // Deep copy the Brain
    }
    std::cout << "Cat with brain assignment operator called.\n";
    return *this;
}

// Virtual destructor
Cat::~Cat() {
    delete brain; // Free the allocated Brain
    std::cout << "Cat with brain virtual destructor called.\n";
}

// Override the virtual function makeSound
void Cat::makeSound() const {
    std::cout << "Meow Meaow!\n";
}

// Getter for brain
Brain* Cat::getBrain() const {
    return brain;
}