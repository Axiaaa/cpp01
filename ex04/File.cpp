#include "File.hpp"

File::File(std::string filename, std::string replaceStr, std::string replaceWith) {

    File::filename = filename;
    File::strToReplace = replaceStr;
    File::strReplaceWith = replaceWith;
}

File::~File() {

    ;
}

std::string File::getStrReplaceWith() {

    return File::strReplaceWith;
}

std::string File::getFilename() {

    return File::filename;
}

std::string File::getStrToReplace() {

    return File::strToReplace;
} 

std::vector<std::string> *File::getBuffer() {

    return File::buffer;
}   

int File::getFd() {

    return File::fd;
}

void File::setFd(int fd) {

    File::fd = fd;
}

void File::setBuffer(std::vector<std::string> *buffer) {

    File::buffer = buffer;
}