#include "Zombie.hpp"

int main() {

    Zombie z;
    Zombie* z2 = z.newZombie("Zombie2");
    z2->announce();
    z.randomChump("Zombie1");
    delete z2;
    return 0;
}