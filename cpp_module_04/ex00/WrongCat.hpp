#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat(); // Default constructor
    WrongCat(const WrongCat& other); // Copy constructor
    WrongCat& operator=(const WrongCat& other); // Copy assignment operator
    virtual ~WrongCat(); // Virtual destructor

    virtual void makeSound() const; // Override the virtual function makeSound
};

#endif