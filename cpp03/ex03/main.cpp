#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap d("Beyza");

    d.attack("TargetDummy");
    d.takeDamage(40);
    d.beRepaired(20);
    d.whoAmI();

    return 0;
}
