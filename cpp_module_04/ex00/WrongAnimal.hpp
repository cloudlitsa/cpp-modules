#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal(); // Default constructor
    WrongAnimal(const WrongAnimal& other); // Copy constructor
    WrongAnimal& operator=(const WrongAnimal& other); // Copy assignment operator
    virtual ~WrongAnimal(); // Virtual destructor

    virtual void makeSound() const; // Virtual function to be overridden

    // Getter for type
    std::string getType() const;
};

#endif