#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <vector>

# define string std::string
class File {

    private :

        string filename;
        string strToReplace;
        string strReplaceWith;
        string *buffer;

    public :
    
        File(string name,string replaceStr,string replaceWith);
        ~File();
        string getStrToReplace();
        string getStrReplaceWith();
        string getFilename();    
        string *getBuffer();
        void setBuffer(string *buffer);
};

# endif 