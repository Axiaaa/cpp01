#include "Weapon.hpp"

const std::string Weapon::getType()
{
    std::string s = Weapon::type;
    return s; 
}
void Weapon::setType(std::string s)
{
    Weapon::type = s;
}

Weapon::Weapon(std::string s){

    Weapon::type = s;
}