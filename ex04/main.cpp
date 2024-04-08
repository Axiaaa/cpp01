#include <iostream>
#include <fstream>
#include <stdexcept>
#include <vector>
#include <cctype>
#include "File.hpp"


string isFileExisting(string str) {
    std::ifstream f(str.c_str());

    string content;
    if (f.is_open()) {
        string line;
        while (std::getline(f, line))
            content.append(line + "\n");
        f.close();
        if (content.length() > 0 && content[content.length() - 1] == '\n' && content[content.length() - 2] != '\n')
            content.erase(content.length() - 1);
    } else 
        std::cerr << ("Error while opening file. Check if the file exists or if permissions are corrects.");
    return content;
}


void Checks(string filename, string strToReplace, string strReplaceWith) {  
    if (filename.empty() || strToReplace.empty() || strReplaceWith.empty())
        std::cerr << "Error, invalid arguments" << std::endl;
    for (string::iterator it = strToReplace.begin(); it != strToReplace.end(); it++) {
        for (string::iterator c = strToReplace.begin(); c != strToReplace.end(); c++) {
            if (!isascii(*c))
                std::cerr << ("Error, invalid string to replace");
    }
    for (string::iterator it = strReplaceWith.begin(); it != strReplaceWith.end(); it++) {
        for (string::iterator c = strReplaceWith.begin(); c != strReplaceWith.end(); c++) {
            if (!isascii(*c))
               std::cerr << ("Error, invalid string to replace with");
        }
    }
    for (string::iterator it = filename.begin(); it != filename.end(); it++) {
        for (string::iterator c = filename.begin(); c != filename.end(); c++) {
            if (!isascii(*c))
                std::cerr << ("Error, invalid filename");
            }
        }   
    }
}

void createFile(File file) {
    string newFilename = file.getFilename() + ".replace";
    std::ofstream newFile(newFilename.c_str());
    if (newFile.is_open()) {
        newFile << *file.getBuffer();
        newFile.close();
    } else
        std::cerr << "Error while creating file" << std::endl;
}

void replace(File file) {
    string strToReplace = file.getStrToReplace();
    string strReplaceWith = file.getStrReplaceWith();
    string line = *file.getBuffer();

    size_t pos = 0;    
    while ((pos = line.find(strToReplace, pos)) != string::npos) {
        line = line.substr(0, pos) + strReplaceWith + line.substr(pos + strToReplace.length());
        pos += strReplaceWith.length();
    }
    *file.getBuffer() = line;
}

int main(int ac, char **av) {
    if (ac == 4) {
        Checks(av[1], av[2], av[3]);
        File file(av[1], av[2], av[3]);
        string temp = isFileExisting(file.getFilename());
        file.setBuffer(&temp);
        replace(file);
        createFile(file);
    } else {
        std::cerr << "Error, invalid arguments" << std::endl;
        return 1;
    }
    return 0;
}