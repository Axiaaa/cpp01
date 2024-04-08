#ifndef HARL_HPP

#include <iostream>
#define string std::string
#define printf std::cout

class Harl {

    public :
        void complain(string level);

    private :
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};


#endif