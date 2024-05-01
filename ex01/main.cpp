#include "Zombie.hpp"

int main() {

    int nbZombies = 5;
    Zombie* horde = zombieHorde(nbZombies, "Lucie");

    for (int i = 0; i != nbZombies; i++) {
        horde[i].announce();
    }

    delete[] horde;
    return 0;
}