#include <iostream>
#include <fstream>
#include <stdexcept>
#include <vector>
#include <cctype>
#include "File.hpp"

std::vector<std::string> isFileExisting(std::string str) {
    std::ifstream f(str.c_str());

    std::vector <std::string> content;
    if (f.is_open()) {
        std::string line;
        while (std::getline(f, line))
            content.push_back(line);
        f.close();
    } else {
        std::cerr << ("Error while opening file. Check if the file exists or if permissions are corrects.");
    }
    return content;
}


void Checks(std::string filename, std::string strToReplace, std::string strReplaceWith) {
    if (filename.empty() || strToReplace.empty() || strReplaceWith.empty())
        std::cerr << "Error, invalid arguments" << std::endl;
    for (std::string::iterator it = strToReplace.begin(); it != strToReplace.end(); it++) {
        for (std::string::iterator c = strToReplace.begin(); c != strToReplace.end(); c++) {
            if (!isascii(*c))
                std::cerr << ("Error, invalid string to replace");
    }
    for (std::string::iterator it = strReplaceWith.begin(); it != strReplaceWith.end(); it++) {
        for (std::string::iterator c = strReplaceWith.begin(); c != strReplaceWith.end(); c++) {
            if (!isascii(*c))
               std::cerr << ("Error, invalid string to replace with");
        }
    }
    for (std::string::iterator it = filename.begin(); it != filename.end(); it++) {
        for (std::string::iterator c = filename.begin(); c != filename.end(); c++) {
            if (!isascii(*c))
                std::cerr << ("Error, invalid filename");
            }
        }   
    }
}

void createFile(File file) {
    std::string newFilename = file.getFilename() + ".replace";
    std::ofstream newFile(newFilename.c_str());
    if (newFile.is_open()) {
        for (std::vector<std::string>::iterator it = file.getBuffer()->begin(); it != file.getBuffer()->end(); it++) {
            newFile << *it;
            if (it + 1 != file.getBuffer()->end())
                newFile << std::endl;
            else if (it + 1 == file.getBuffer()->end())
                newFile << std::endl;
        }
        newFile.close();
    } else
        std::cerr << "Error while creating file" << std::endl;
}

void replace(File file) {
    std::string strToReplace = file.getStrToReplace();
    std::string strReplaceWith = file.getStrReplaceWith();
    std::vector<std::string>* buffer = file.getBuffer();

    for (std::vector<std::string>::iterator it = buffer->begin(); it != buffer->end(); it++) {
        std::string& line = *it;
        size_t pos = 0;
        while ((pos = line.find(strToReplace, pos)) != std::string::npos) {
            line = line.substr(0, pos) + strReplaceWith + line.substr(pos + strToReplace.length());
            pos += strReplaceWith.length();
        }
    }
}

int main(int ac, char **av) {
    //TODO : Fix /n at EOF
    if (ac == 4) {
        Checks(av[1], av[2], av[3]);
        File file(av[1], av[2], av[3]);
        std::vector<std::string> temp = isFileExisting(file.getFilename());
        file.setBuffer(&temp);
        replace(file);
        createFile(file);
    } else {
        std::cerr << "Error, invalid arguments" << std::endl;
        return 1;
    }
    return 0;
}