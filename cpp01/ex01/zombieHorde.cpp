/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekarada <bekarada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:09:15 by bekarada          #+#    #+#             */
/*   Updated: 2025/06/26 16:24:52 by bekarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;

    if (N <= 0)
        return (NULL);
    Zombie *newZombieHorde = new Zombie[N];
    while (i < N)
    { 
        newZombieHorde[i].nameZombie(name);
        std::cout << newZombieHorde[i].getZombie() << " created" << std::endl;
        i++;
    }
    return (newZombieHorde);
}