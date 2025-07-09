#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    name = "tmp";
    ClapTrap::name = name + "_clap_name";
    FragTrap::hitPoints = 100;
    ScavTrap::energyPoints = 50;
    FragTrap::attackDamage = 30;
    std::cout << "start constructor DiamondTrap" << std::endl;
}
DiamondTrap::DiamondTrap(const std::string &name) : ScavTrap(name), FragTrap(name)
{
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    FragTrap::hitPoints = 100;
    ScavTrap::energyPoints = 50;
    FragTrap::attackDamage = 30;
    std::cout << "-----------------------------" << std::endl
    << "DiamondTrap name is : " << this->name << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &nameOther) : ScavTrap(nameOther), FragTrap(nameOther)
{
    *this = nameOther;
    std::cout << "DiamondTrap " << this->name << " copied" << std::endl;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &nameOther)
{
    if (this != &nameOther)
    {
        this->name = nameOther.name;
        FragTrap::hitPoints = nameOther.FragTrap::hitPoints;
        ScavTrap::energyPoints = nameOther.ScavTrap::energyPoints;
        FragTrap::attackDamage = nameOther.FragTrap::attackDamage;
    }
    std::cout << "DiamondTrap " <<  this->name << " assigned" << std::endl; 
    return *this;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "-----------------------------" << std::endl
    << "DiamondTrap " << this->name << " destroyed " << std::endl;
}
void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}
void DiamondTrap::whoAmI()
{
    std::cout << "My name -> " << this->name
    << " . My ClapTrap name -> " 
    << ClapTrap::name << std::endl;
}