
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("tmp"), hitPoints(10), energyPoints(10), attackDamage(10)
{
    std::cout << "ClapTrap start constructor" << std::endl;
}
ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(10)
{
    std::cout << "-----------------------------" << std::endl
    << "ClapTrap name is : " << this->name << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &nameOther)
{
    *this = nameOther;
    std::cout << "ClapTrap " << this->name << " copied" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &nameOther)
{
    if (this != &nameOther)
    {
        this->name = nameOther.name;
        this->hitPoints = nameOther.hitPoints;
        this->energyPoints = nameOther.energyPoints;
        this->attackDamage = nameOther.attackDamage;
    }
    std::cout << "ClapTrap " << this->name << " assigned" << std::endl; 
    return *this;
}
ClapTrap::~ClapTrap()
{
    std::cout << "-----------------------------" << std::endl
    << "ClapTrap " << this->name <<  " destroyed " << std::endl;
}
void ClapTrap::attack(const std::string &target)
{
    if (hitPoints <= 0 || energyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " can't attack because of is dead or hasn`t any energy " << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "ClapTrap " << this->name
    <<  " attacks " << target << ", causing "
    << this->attackDamage << " points of damage! "
    << "left energy : " << this->energyPoints << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount == 0)
    {
        std::cout << "Claptrap " << this->name << " no damage" << std::endl;
        return ;
    }
    if (this->hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " is 0 hitpoint now" << std::endl;
        return ;
    }
    if (amount >= (unsigned int)this->hitPoints)
        this->hitPoints = 0;
    else
        this->hitPoints -= amount;
    std::cout << "ClapTrap " << this->name
    <<  " takes " << amount<< " damage"
    << " also " << this->name << " has "
    << this->hitPoints << " hitPoint now" <<std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints <= 0 || energyPoints <= 0 || amount == 0)
    {
        std::cout << "ClapTrap " << this->name <<  " can not repair" << std::endl;
        return ;
    }
    energyPoints--;
    hitPoints += amount;
    std::cout << "ClapTrap " << name << " repairs itself with " << amount
    << " also " << this->name << " has "
    << this->hitPoints << " hitPoint now" 
    << " left energy : " << this->energyPoints <<std::endl;
}
std::string ClapTrap::getName() const
{
    return (this->name);
}
int ClapTrap::getHitPoints() const
{
    return (this->hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
    return (this->energyPoints);
}

int ClapTrap::getAttackDamage() const
{
    return (this->attackDamage);
}
