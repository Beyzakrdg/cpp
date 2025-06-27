/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekarada <bekarada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:47:06 by bekarada          #+#    #+#             */
/*   Updated: 2025/06/27 12:01:07 by bekarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "******DEBUG******" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "******INFO******" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "******WARNING******" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "******ERROR******" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {

    int i = 0;
    typedef void (Harl::*HarlFunc)();
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    HarlFunc functions[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

    while (i < 4) 
    {
        if (level == levels[i])
        {
            (this->*functions[i])();
            return;
        }
        i++;
    }
    std::cout << "INVALID LEVEL" << std::endl;
}