#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <vector>

class File {

    private :

    std::string filename;
    int fd;
    std::string strToReplace;
    std::string strReplaceWith;
    std::vector<std::string> *buffer;
    public :
    
    File(std::string name, std::string replaceStr, std::string replaceWith);
    ~File();
    int getFd();
    void setFd(int fd);
    std::string getStrToReplace();
    std::string getStrReplaceWith();
    std::string setReplaceWith();
    std::string getFilename();
    std::vector<std::string> *getBuffer();
    void setBuffer(std::vector<std::string> *buffer);
};

# endif 