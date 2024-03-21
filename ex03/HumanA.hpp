#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA {

    private :

    Weapon      weapon;
    std::string name;

    public : 
    
    HumanA(Weapon w);
    ~HumanA();
    void attack();
    void setWeapon(Weapon w);
};

#endif 