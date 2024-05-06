#include "HumanB.hpp"

void HumanB::setWeapon(Weapon& w) { this->w = &w; }

void HumanB::attack() {

    if (HumanB::w == NULL) {
        std::cout << HumanB::name << " has no weapon to attack with" << std::endl;
        return;
    }
    std::cout << HumanB::name << " attacks with his " << HumanB::w->getType() << std::endl;
}

HumanB::HumanB(std::string s) { this->name = s; }

HumanB::~HumanB() {}