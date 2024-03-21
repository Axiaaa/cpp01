#include "HumanA.hpp"

HumanA::HumanA(Weapon w)
{
    setWeapon(w);
}

void HumanA::setWeapon(Weapon w)
{
    HumanA::weapon = w;
}

void HumanA::attack() {

    std::cout << HumanA::name << " attacks with their " << HumanA::weapon.getType();
}