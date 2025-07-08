
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("tmp"), hitPoints(10), energyPoints(10), attackDamage(10)
{
    std::cout << "start constructor ClapTrap" << std::endl;
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
    << "ClapTrap " << this->name << " destroyed " << std::endl;
}
void ClapTrap::attack(const std::string &target)
{
    if (hitPoints <= 0 || energyPoints <= 0)
    {
        std::cout << this->name << " is dead or hasn`t any energy " << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "ClapTrap " << this->name
    <<  " attacks " << target << ", causing "
    << this->attackDamage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    this->hitPoints -= amount;
    if (this->hitPoints < 0)
        this->hitPoints = 0;
    std::cout << "ClapTrap " << this->name
    <<  " takes " << amount<< " damage"
    << " also " << this->name << " has "
    << this->hitPoints << " hitPoint now" <<std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints <= 0 || energyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name <<  "can not repair" << std::endl;
        return ;
    }
    energyPoints--;
    hitPoints += amount;
    std::cout << "ClapTrap " << name << " repairs itself with " << amount
    << " also " << this->name << " has "
    << this->hitPoints << " hitPoint now" <<std::endl;
}

// void ClapTrap::setHitPoints(int hitPoints)
// {
//     this->hitPoints = hitPoints;
//     if (this->hitPoints < 0)
//         this->hitPoints = 0;
// }
// void ClapTrap::setEnergyPoints(int energyPoints)
// {
//     this->energyPoints = energyPoints;
//     if (this->energyPoints < 0)
//         this->energyPoints = 0;
// }
// void ClapTrap::setAttackDamage(int attackDamage)
// {
//     this->attackDamage = attackDamage;
//}
std::string ClapTrap::getName() const
{
    return (name);
}
int ClapTrap::getHitPoints() const
{
    return (hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
    return (energyPoints);
}

int ClapTrap::getAttackDamage() const
{
    return (attackDamage);
}