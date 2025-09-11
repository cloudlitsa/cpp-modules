#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include "Brain.hpp"

#include <iostream>
#include <string>

class AAnimal {
protected:
    std::string type;

public:
    AAnimal(); // Default constructor
    AAnimal(const AAnimal& other); // Copy constructor
    AAnimal& operator=(const AAnimal& other); // Copy assignment operator
    virtual ~AAnimal(); // Virtual destructor

    virtual void makeSound() const = 0; // Pure virtual function - making this an abstract class
    // Getter for type
    std::string getType() const;
};

#endif