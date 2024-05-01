#include "Harl.hpp"

void Harl::info(void) {
    printf << "Time's clear on the West Coast" << "\n";
}
 
void Harl::warning(void) {
    printf << "Careful ! Aliens are coming !" << "\n";
}

void Harl::debug(void) {
    printf << "Hey, I'm a useless information to help your debug this awful program !" << "\n";
}

void Harl::error(void) {
    printf << "Bip boop... Boop boop bip !!! Bip boop :(" << "\n";
}

void Harl::complain(string level) {

    void (Harl::*ptr[5])(void) = {&Harl::info, &Harl::warning, &Harl::debug, &Harl::error, &Harl::error};
    string levels[4] = {"info", "warning", "debug", "error"};
    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) {
            (this->*ptr[i])();
            return;
        }
    }
    printf << "Unknown level" << "\n";
}