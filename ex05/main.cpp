#include "Harl.hpp"

int main(void) {
    
    Harl harl;
    
    harl.complain("info");
    harl.complain("warning");
    harl.complain("debug");
    harl.complain("error");
    harl.complain("critical");
    
    return 0;
}