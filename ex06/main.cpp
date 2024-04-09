#include "Harl.hpp"


logLevel strToEnum(string s) {
    if (s == "WARNING") return WARNING;
    if (s == "DEBUG") return DEBUG;
    if (s == "ERROR") return ERROR;
    if (s == "INFO") return INFO;
    return INVALID;
 }

int main(int ac, char **av) {
    
    string s;
    Harl harl;

    if (ac == 2)
    {
        logLevel level = strToEnum(av[1]);
        switch (level)
        {
        case DEBUG : 
            harl.complain("debug");
            harl.complain("info");
            harl.complain("warning");
            harl.complain("error");
            break;
        case INFO : 
            harl.complain("info");
            harl.complain("warning");
            harl.complain("error");
            break;
        case WARNING : 
            harl.complain("warning");
            harl.complain("error");
            break;
        case ERROR :
            harl.complain("error");
            break;
        default:
            printf << "[ Probably complaining about insignificant problems ]" << NL;
            break;
        }
    }

}