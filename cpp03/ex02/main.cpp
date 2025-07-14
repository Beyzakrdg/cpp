
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
    FragTrap ft1;
    FragTrap ft2(ft1);
    FragTrap ft3("beyza");
    FragTrap ft4;
    ft4 = ft3;

    ft1.attack(ft4.getName());
    ft1.takeDamage(40);
    ft1.beRepaired(25);
    ft1.highFivesGuys();
    ft2.attack(ft3.getName());
    ft4.highFivesGuys();

}
