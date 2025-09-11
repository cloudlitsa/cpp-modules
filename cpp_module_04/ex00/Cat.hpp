#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat(); // Default constructor
    Cat(const Cat& other); // Copy constructor
    Cat& operator=(const Cat& other); // Copy assignment operator
    ~Cat(); // Virtual destructor

    void makeSound() const; // Override the virtual function makeSound
};

#endif