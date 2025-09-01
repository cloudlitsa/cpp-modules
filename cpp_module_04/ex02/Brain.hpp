#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
private:
    std::string ideas[100];
public:
    Brain(); // Default constructor
    Brain(const Brain& other); // Copy constructor
    Brain& operator=(const Brain& other); // Copy assignment operator
    ~Brain(); // Destructor

    // Setter and getter for ideas
    void setIdea(int index, const std::string& idea);
    std::string getIdea(int index) const;
};

#endif