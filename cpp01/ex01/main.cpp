/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekarada <bekarada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:08:56 by bekarada          #+#    #+#             */
/*   Updated: 2025/06/26 16:18:45 by bekarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	int i = 0;
	int N = 3;
	Zombie* newZombieHorde = zombieHorde(N, "Foo");
	
	while (i < N)
	{
		newZombieHorde[i].announce();
		i++;
	}
	delete[] newZombieHorde;
	return (0);
}