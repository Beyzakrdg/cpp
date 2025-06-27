/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */ 
/*                                                    +:+ +:+         +:+     */
/*   By: bekarada <bekarada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 18:25:31 by bekarada          #+#    #+#             */
/*   Updated: 2025/06/27 14:27:33 by bekarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    weapon = NULL;
    std::cout << "--------------------------" << std::endl;
    std::cout << "constructor started"<< std::endl << "humanB has no weapon" << std::endl; 
    std::cout << "--------------------------" << std::endl;

}

void HumanB::setWeapon(Weapon& weapon)
{
    std::cout << name << " taking up the ";
    this->weapon = &weapon;
    std::cout << this->weapon->getType() << std::endl;
}

void HumanB::attack() 
{
    if (weapon)
        std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack!" << std::endl;
}