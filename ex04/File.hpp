#ifndef FILE_H
#define FILE_H

#include <iostream>

class File {

    private :

    std::string filename;
    int fd;
    std::string strToReplace; 

    public :
    
    File(std::string name, int fd);
    int getFd();
    void setFd(int fd);
    void setStrToReplace(std::string str);
    void setFilename(std::string filename);
    std::string getStrToReplace();
    std::string getFilename();
};

# endif FILE_H