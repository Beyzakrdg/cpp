#include "ClapTrap.hpp"

int main()
{
	ClapTrap ct1;
	ClapTrap ct2(ct1);
	ClapTrap ct3("beyza");
	ClapTrap ct4;
	ct4 = ct3;

	ct3.attack(ct1.getName());
	ct1.takeDamage(ct3.getEnergyPoints());
	ct1.beRepaired(1);
	ct1.attack(ct3.getName());
}