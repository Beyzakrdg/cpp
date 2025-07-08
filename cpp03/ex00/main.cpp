#include "ClapTrap.hpp"

// int main() {
//     ClapTrap robot("Beyza");

//     std::cout << "Initial stats:" << std::endl;
//     std::cout << "Name: " << robot.getName() << std::endl;
//     std::cout << "HP: " << robot.getHitPoints() << std::endl;
//     std::cout << "Energy: " << robot.getEnergyPoints() << std::endl;
//     std::cout << "Attack Damage: " << robot.getAttackDamage() << std::endl << std::endl;

//     robot.attack("Target Dummy");
//     robot.takeDamage(4);
//     robot.beRepaired(-3);
//     robot.takeDamage(133);

//     robot.attack("Another Target");

//     std::cout << "\nFinal stats:" << std::endl;
//     std::cout << "HP: " << robot.getHitPoints() << std::endl;
//     std::cout << "Energy: " << robot.getEnergyPoints() << std::endl;

//     return 0;
// }

int main()
{
	ClapTrap cT("beyzz");
	ClapTrap CT1(cT);
	ClapTrap CT2;
	CT2 = cT;

	cT.attack("aa");
	cT.takeDamage(3);
	cT.beRepaired(7);
	cT.attack("bb");

	return 0;
}