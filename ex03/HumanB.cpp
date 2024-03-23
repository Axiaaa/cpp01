#include "HumanB.hpp"

void HumanB::setWeapon(Weapon& w)
{
    HumanB::w = &w;
}

void HumanB::attack()
{
    std::cout << HumanB::name << " attacks with his " << HumanB::w->getType() << std::endl;
}

HumanB::HumanB(std::string s) {
    HumanB::name = s;
}