
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
    std::cout << "------ FragTrap Test Başlıyor ------" << std::endl;

    FragTrap frag("Beyza");

    frag.attack("Enemy1");
    frag.takeDamage(40);
    frag.beRepaired(25);
    frag.highFivesGuys();

    std::cout << "\n------ Copy Constructor Testi ------" << std::endl;
    FragTrap fragCopy(frag);
    fragCopy.attack("Enemy2");

    std::cout << "\n------ Assignment Operator Testi ------" << std::endl;
    FragTrap fragAssign;
    fragAssign = frag;
    fragAssign.highFivesGuys();

    std::cout << "\n------ ScavTrap Testi (Karşılaştırma Amaçlı) ------" << std::endl;
    ScavTrap scav("Ayse");
    scav.attack("Enemy3");
    scav.guardGate();

    std::cout << "\n------ Test Sonu ------" << std::endl;
    return 0;
}
