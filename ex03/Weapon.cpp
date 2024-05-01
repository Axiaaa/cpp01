#include "Weapon.hpp"

const std::string Weapon::getType() { return this->type; }

void Weapon::setType(std::string s) { this->type = s; }

Weapon::Weapon(std::string s) { this->type = s; }