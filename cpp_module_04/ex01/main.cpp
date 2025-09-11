#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
{
    std::cout << "=======Testing animals deep copy=======" << std::endl;

    // from pdf
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
   // create an array of animal pointers
    const int numAnimals = 4;
    Animal* animals[numAnimals];

    // fill half the array with Dog and the other half with Cat objects
    for (int i = 0; i < numAnimals / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = numAnimals / 2; i < numAnimals; ++i) {
        animals[i] = new Cat();
    }

    // use the animals
    std::cout << "Testing animals in array" << std::endl;
    for (int idx = 0; idx < numAnimals; idx++) {
        std::cout << "Animal " << idx << " (" << animals[idx]->getType() << "): ";
        animals[idx]->makeSound();
    }

    // test deep copy by setting and getting ideas in the brains
    Dog original;
    original.getBrain()->setIdea(0, "I want to play fetch");

    Dog copy = original; // copy constructor, should be a deep copy
    copy.getBrain()->setIdea(0, "I want to chase the ball"); // this will print if it's a deep copy

    std::cout << "Original Dog's idea: " << original.getBrain()->getIdea(0) << std::endl; // if deep copy it should print "I want to play fetch"
    std::cout << "Copied Dog's idea: " << copy.getBrain()->getIdea(0) << std::endl; // if it's deep copy it should print "I want to chase the ball"
    std::cout << "Original Dog's idea: " << original.getBrain()->getIdea(0) << std::endl; // if deep copy it should print "I want to play fetch"

    Cat originalCat;
    originalCat.getBrain()->setIdea(0, "I want to climb the tree");

    Cat copyCat = originalCat; // copy constructor, should be a deep copy
    copyCat.getBrain()->setIdea(0, "I want to nap in the sun");

    std::cout << "Original Cat's idea: " << originalCat.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Cat's idea: " << copyCat.getBrain()->getIdea(0) << std::endl;
    std::cout << "Original Cat's idea: " << originalCat.getBrain()->getIdea(0) << std::endl;
    // Clean up memory
    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i]; // delete each animal to call their destructors, virtual destructors ensure proper cleanup
    }

    std::cout << "=======End of deep copy test=======" << std::endl;
}
{

    std::cout << "BANANAS" << std::endl;

    Dog *a = new Dog;
//     a->getBrain()->setIdea(1, "hjHSAKDHAKJDHAKJDHAJKSDHKJAHDAJKHDJASKDHSDJAK");
    
    Dog *b = new Dog;
    *b = *a;
    // std::cout << "MAMAMA" << std::endl;
    a->getBrain()->setIdea(2, "BANANANA");
    b->getBrain()->setIdea(2, "BANANANA");

//     std::cout << "YTYHTYHRTHFGHFGHYHTHJHJHYJGHHJ: "  << b->getBrain()->getIdea(1) << std::endl; // 

    // std::cout << "Idea of b-2: " << b->getBrain()->getIdea(2) << std::endl;
    delete a;

    delete b;
}


    return 0;
}