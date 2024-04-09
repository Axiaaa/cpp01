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
    logLevel level;

    if (ac == 2)
    {
        switch (level)
        {
        case WARNING : 
            
            break;

        case DEBUG : 

            break;

        case ERROR : 

            break;

        case INFO : 

            break;

        default:
            break;
        }
    }

}