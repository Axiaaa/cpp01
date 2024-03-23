#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB {

    private:

    std::string name;
    Weapon* w;

    public:

    HumanB(std::string s);
    void setWeapon(Weapon& w);
    void attack();
};


#endif 