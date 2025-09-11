#include "Dog.hpp"

// Default constructor
Dog::Dog() : Animal(), brain(new Brain()) {  // Allocate a new Brain
    type = "Dog"; // Set the type to "Dog"
    std::cout << "Dog with brain constructor called.\n"<< std::endl;
}

// Copy constructor
Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain)) { //
    // Call base class copy constructor and deep copy the Brain
    std::cout << "Dog with brain copy constructor called.\n" << std::endl;
    // if (this != &other){
    //     // this->brain = new Brain(*other.brain);
    // }
    // *this = other; 
}

// Copy assignment operator
Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog assignment operator called.\n" << std::endl;
    if (this != &other) {
        Animal::operator=(other); // Call base class assignment operator
        // Deep copy the Brain
        // delete this->brain;
        // this->brain = new Brain();
        *brain = *(other.brain); // this assumes brain is already allocated
    }
    return *this;
}

// Virtual destructor
Dog::~Dog() {
    delete brain; // Free the allocated Brain
    std::cout << "Dog virtual destructor called.\n";
}

// Override the virtual function makeSound
void Dog::makeSound() const {
    std::cout << "Woof Woof!\n";
}

// Getter for brain
Brain* Dog::getBrain() const {
    return brain;
}
