#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog(); // Default constructor
    Dog(const Dog& other); // Copy constructor
    Dog& operator=(const Dog& other); // Copy assignment operator
    virtual ~Dog(); // Virtual destructor

    virtual void makeSound() const; // Override the virtual function makeSound
};

#endif