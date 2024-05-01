#include "File.hpp"

File::File(string filename, string replaceStr, string replaceWith) {

    this->filename = filename;
    this->strToReplace = replaceStr;
    this->strReplaceWith = replaceWith;
}

string File::getStrReplaceWith() { return File::strReplaceWith; }
string File::getFilename(){ return File::filename; }
string File::getStrToReplace() { return File::strToReplace; }
string *File::getBuffer() { return File::buffer; }
void File::setBuffer(string *buffer) { File::buffer = buffer; }
