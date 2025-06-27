

#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <iostream>

class Replace
{
    private:
        std::string inFile;
        std::string outFile;
        std::string string_to_find;
        std::string string_to_replace;

    public:
        Replace(std::string &filename, std::string &string_to_find, std::string &string_to_replace);
        bool checker();

};

#endif