/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekarada <bekarada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:05:19 by bekarada          #+#    #+#             */
/*   Updated: 2025/06/27 12:27:02 by bekarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Constructor started" << std::endl;
}

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

void    Harl::setlevel(std::string level)
{
    if (level == "DEBUG" || level == "debug")
        this->level = 0;
    else if (level == "INFO" || level == "info")
        this->level = 1;
    else if (level == "WARNING" || level == "warning")
        this->level = 2;
    else if (level == "ERROR" || level == "error")
        this->level = 3;
    else
        this->level = -1;
}

int Harl::getlevel()
{
    return this->level;
}

void    Harl::proccess()
{
    int level = this->level;

    switch (level)
    {
        case 0:
            debug();
            std::cout<<std::endl;
            info();
            std::cout<<std::endl;
            warning();
            std::cout<<std::endl;
            error();
            break;
        case 1:
            info();
            std::cout<<std::endl;
            warning();
            std::cout<<std::endl;
            error();
            break ;
        case 2:
            warning();
            std::cout<<std::endl;
            error();
            break ;
        case 3: 
            error();
            break ;
        default :
            std::cout << "Wrong level!!"<<std::endl;
        break ;    
    }
}
