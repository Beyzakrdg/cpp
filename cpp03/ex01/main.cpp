#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Beyza");

    scav.attack("Enemy");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();

    ScavTrap scav2 = scav;
    scav2.attack("Enemy2");

    ScavTrap scav3;
    scav3 = scav;
    scav3.guardGate();

    return 0;
}
