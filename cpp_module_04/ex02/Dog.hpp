#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private:
    Brain* brain;
public:
    Dog(); // Default constructor
    Dog(const Dog& other); // Copy constructor
    Dog& operator=(const Dog& other); // Copy assignment operator
    virtual ~Dog(); // Virtual destructor

    // must implement the pure virtual function
    virtual void makeSound() const; // Override the virtual function makeSound
    Brain* getBrain() const; // Getter for brain
};

#endif