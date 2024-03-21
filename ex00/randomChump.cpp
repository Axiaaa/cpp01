#include "Zombie.hpp"

void Zombie::randomChump(std::string name) {

    Zombie z;
    z.name = name;
    z.announce();
}