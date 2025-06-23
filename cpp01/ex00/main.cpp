/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:59:51 by mac               #+#    #+#             */
/*   Updated: 2025/06/23 18:34:06 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#include <cstdlib>
int main()
{
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    randomChump("StackZombie");
    delete heapZombie;
    return (0);
}