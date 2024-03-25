#include <File.hpp>


File::File(std::string filename, int fd) {

    setFilename(filename);
    setFd(fd);
}

void File::setFilename(std::string filename) {
    
    File::filename = filename;
}

std::string File::getFilename() {

    return File::filename;
}

std::string File::getStrToReplace() {

    return File::filename;
} 

int File::getFd() {

    return File::fd;
}

void File::setFd(int fd) {

    File::fd = fd;
}

void File::setStrToReplace(std::string str){

    File::strToReplace = str;
}

