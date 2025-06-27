/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekarada <bekarada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:30:27 by bekarada          #+#    #+#             */
/*   Updated: 2025/06/27 11:40:04 by bekarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

class Replace
{
    private:
        std::string inFile;
        std::string outFile;
        std::string string_to_find;
        std::string string_to_replace;

    public:
        Replace();
        void        setReplace(std::string filename, std::string string_to_find, std::string string_to_replace);
        std::string getReplaceinFile();
        std::string getReplaceoutFile();
        std::string getReplacestring_to_find();
        std::string getReplacestring_to_replace();
        int         checker();

};

#endif