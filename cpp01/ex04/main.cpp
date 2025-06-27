/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekarada <bekarada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:30:48 by bekarada          #+#    #+#             */
/*   Updated: 2025/06/27 11:38:36 by bekarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "wrong argument number" << std::endl;
        std::cout << "access: " << argv[0] << " <filename> <string_to_find> <string_to_replace>" << std::endl;
        return (1);
    }
    Replace replaceFile;
    replaceFile.setReplace(argv[1], argv[2], argv[3]);
    if (replaceFile.checker())
        return (1);
    return (0);
}