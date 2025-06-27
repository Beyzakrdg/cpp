/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekarada <bekarada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:05:21 by bekarada          #+#    #+#             */
/*   Updated: 2025/06/27 12:22:24 by bekarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout<<"Invalid Argumant Count!!!"<<std::endl;
        return 1;
    }
    Harl harl;
    harl.setlevel(argv[1]);
    harl.proccess();
    return 0;
}