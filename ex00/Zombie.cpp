#include "Zombie.hpp"

std::string Zombie::getName(void) { return Zombie::name; }

void    Zombie::setName(std::string name) { Zombie::name = name; }

Zombie::~Zombie() {
    
    std::cout << "Zombie " << this->name << " destroyed." << std::endl;
}

void    Zombie::announce(void) {
    std::cout << Zombie::name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}
