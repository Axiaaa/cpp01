#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>



class Zombie {

    private :

        std::string name; 

    public : 

        ~Zombie();
        void    announce(void);
        void    setName(std::string name);
        std::string getName(void);
};

void    randomChump(std::string name);
Zombie *newZombie(std::string name);
#endif