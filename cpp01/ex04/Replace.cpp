

#include "Replace.hpp"

Replace::Replace(std::string &filename, std::string &string_to_find, std::string &string_to_replace)
{
    this->inFile = filename;
    this->outFile = filename + (".replace");
    this->string_to_find = string_to_find;
    this->string_to_replace = string_to_replace;

}