#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon &w) : weapon(w) {

    HumanA::name = s;
    HumanA::weapon = w;
} 

void HumanA::attack() {

    std::cout << HumanA::name << " attacks with his " << HumanA::weapon.getType() << std::endl;
}

HumanA::~HumanA() {
    ;
}