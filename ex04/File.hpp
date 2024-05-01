#ifndef FILE_H
#define FILE_H

#include <iostream>

# define string std::string

class File {

    private :

        string filename;
        string strToReplace;
        string strReplaceWith;
        string *buffer;

    public :
    
        File(string name,string replaceStr,string replaceWith);
        string getStrToReplace();
        string getStrReplaceWith();
        string getFilename();    
        string *getBuffer();
        void setBuffer(string *buffer);
};

# endif