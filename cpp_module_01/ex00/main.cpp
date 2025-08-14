#include "Zombie.hpp"


int main() {
    std::cout << "====creating Zombie on the Stack====" << std::endl;
    Zombie a("Litsa"); //stack
    a.announce();

    std::cout << "====creating Zombie on the Heap====" << std::endl;
    Zombie* heapZombie = a.newZombie("HeapZombie");
    heapZombie->announce();

    std::cout << "====creating Zombie on the Stack====" << std::endl;
    a.randomChump("StackZombie");

    std::cout << "====finished with StackZombie, HeapZombie still around====" << std::endl;
    delete heapZombie;
    return 0;
}