#include "Zombie.hpp"

Zombie::~Zombie() {
    
    std::cout << "Zombie " << Zombie::name << " has been destroyed" << std::endl;
}

void    Zombie::announce(void) {
    
    std::cout << Zombie::name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}
