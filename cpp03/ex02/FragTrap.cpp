
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "start constructor FragTrap" << std::endl;
}
FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "-----------------------------" << std::endl
    << "FragTrap name is : " << this->name << std::endl;
}
FragTrap::FragTrap(const FragTrap &nameOther) : ClapTrap(nameOther)
{
    *this = nameOther;
    std::cout << "FragTrap " << this->name << " copied" << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap &nameOther)
{
    if (this != &nameOther)
    {
        this->name = nameOther.name;
        this->hitPoints = nameOther.hitPoints;
        this->energyPoints = nameOther.energyPoints;
        this->attackDamage = nameOther.attackDamage;
    }
    std::cout << "FragTrap " <<  this->name << " assigned" << std::endl; 
    return *this;
}
FragTrap::~FragTrap()
{
    std::cout << "-----------------------------" << std::endl
    << "FragTrap " << this->name << " destroyed " << std::endl;
}
void FragTrap::attack(const std::string &target)
{
    if (energyPoints > 0 && hitPoints > 0)
    {
        energyPoints--;
        std::cout << "FragTrap " << name << " attacks " << target
                  << ", causing " << attackDamage << " points of damage" << std::endl;
    }
    else
    {
        std::cout << "FragTrap " << name << " hasn`t any energy or is destroyed and cannot attack" << std::endl;
    }
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " positive high-fives request" << std::endl;
}