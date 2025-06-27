/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekarada <bekarada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:30:38 by bekarada          #+#    #+#             */
/*   Updated: 2025/06/27 11:41:08 by bekarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace()
{
    std::cout << "Constructor started" << std::endl;
}

void Replace::setReplace(std::string filename, std::string string_to_find, std::string string_to_replace)
{
    this->inFile = filename;
    this->string_to_find = string_to_find;
    this->string_to_replace = string_to_replace;
    this->outFile = filename + ".replace";
}


std::string Replace::getReplaceinFile()
{
    return this->inFile;
}

std::string Replace::getReplaceoutFile()
{
    return this->outFile;
}

std::string Replace::getReplacestring_to_find()
{
    return this->string_to_find;
}

std::string Replace::getReplacestring_to_replace()
{
    return this->string_to_replace;
}


int Replace::checker()
{
    std::ifstream inputFile(this->inFile.c_str());
    if (!inputFile)
    {
        std::cout << "Error: Cannot open input file." << std::endl;
        return 1;
    }

    std::ofstream outputFile(this->outFile.c_str());
    if (!outputFile)
    {
        std::cout << "Error: Cannot open output file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(this->string_to_find, pos)) != std::string::npos)
        {
            line = line.substr(0, pos) + this->string_to_replace + line.substr(pos + this->string_to_find.length());
            pos += this->string_to_replace.length();
        }
        outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();
    return 0;
}