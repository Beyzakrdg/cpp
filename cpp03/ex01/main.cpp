#include "ScavTrap.hpp"

int main()
{
    ScavTrap st1;
    ScavTrap st2(st1);
    ScavTrap st3("beyza");
    ScavTrap st4;
    st4 = st3;

    st1.attack(st3.getName());
    st3.takeDamage(st1.getEnergyPoints());
    st1.beRepaired(22);
    st1.guardGate();
}