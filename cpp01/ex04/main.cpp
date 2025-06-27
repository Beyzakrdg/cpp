

#include "Replace.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "wrong argument number" << std::endl;
        std::cout << "access: " << argv[0] << " <filename> <string_to_find> <string_to_replace>" << std::endl;
        return (1);
    }
    std::string fileName(argv[0]);
    std::string string_to_find(argv[1]);
    std::string string_to_replace(argv[2]);

    Replace replaceFile(fileName, string_to_find, string_to_replace);
}