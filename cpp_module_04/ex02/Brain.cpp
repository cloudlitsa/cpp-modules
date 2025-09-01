#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl; 
    // Initialize ideas array
    for (int i = 0; i < 100; ++i) {
        ideas[i] = "No ideas yet";
    }
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copy constructor called" << std::endl;
    // Deep copy - copy each idea individually
    for (int i = 0; i < 100; ++i) {
            ideas[i] = other.ideas[i]; // copy each idea one by one 
    }
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &other) {
        // Deep copy each idea (copying the content of the ideas array one by one)
        for (int i = 0; i < 100; ++i) {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int index, const std::string& idea) {
    if (index >= 0 && index < 100) {
        ideas[index] = idea;
    }
}

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        return ideas[index];
    }
    return "Invalid index";
}
