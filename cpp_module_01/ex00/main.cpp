#include "Zombie.hpp"

int main() {
    std::cout << "====creating Zombie on the Heap====" << std::endl;
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();

    std::cout << "====creating Zombie on the Stack====" << std::endl;
    randomChump("StackZombie");

    std::cout << "====finished with StackZombie, HeapZombie still around====" << std::endl;
    heapZombie->announce();
    delete heapZombie;
    return 0;
}