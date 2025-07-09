
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "start constructor ScavTrap" << std::endl;
}
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "-----------------------------" << std::endl
    << "ScavTrap name is : " << this->name << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &nameOther) :  ClapTrap(nameOther)
{
    *this = nameOther;
    std::cout << "ScavTrap " << this->name << " copied" << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap &nameOther)
{
    if (this != &nameOther)
    {
        this->name = nameOther.name;
        this->hitPoints = nameOther.hitPoints;
        this->energyPoints = nameOther.energyPoints;
        this->attackDamage = nameOther.attackDamage;
    }
    std::cout << "ScavTrap " <<  this->name << " assigned" << std::endl; 
    return *this;
}
ScavTrap::~ScavTrap()
{
    std::cout << "-----------------------------" << std::endl
    << "ScavTrap " << this->name << " destroyed " << std::endl;
}
void ScavTrap::attack(const std::string &target)
{
    if (energyPoints > 0 && hitPoints > 0)
    {
        energyPoints--;
        std::cout << "ScavTrap " << name << " attacks " << target
                  << ", causing " << attackDamage << " points of damage" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << name << " hasn`t any energy or is destroyed and cannot attack" << std::endl;
    }
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap "<< this->name << " is now in Gate keeper mode." << std::endl;
}