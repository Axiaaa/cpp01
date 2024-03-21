#include "Zombie.hpp"

int main() {

    Zombie* horde = zombieHorde(5, "Lucie");

    delete[] horde;
    return 0;
}