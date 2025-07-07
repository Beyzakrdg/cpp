
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(10)
{
    std::cout << "start constructor" << " with name : " << this->name << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &nameOther)
{
    *this = nameOther;
    std::cout << "ClapTrap " << this->name << " copied." << std::endl;
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
    return *this;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}
void ClapTrap::attack(const std::string &target)
{

}
void ClapTrap::takeDamage(unsigned int amount)
{

}
void ClapTrap::beRepaired(unsigned int amount)
{

}

void ClapTrap::setHitPoints(int hitPoints)
{
    this->hitPoints = hitPoints;
    if (this->hitPoints < 0)
        this->hitPoints = 0;
}
void ClapTrap::setEnergyPoints(int energyPoints)
{
    this->energyPoints = energyPoints;
    if (this->energyPoints < 0)
        this->energyPoints = 0;
}
void ClapTrap::setAttackDamage(int attackDamage)
{
    this->attackDamage = attackDamage;
}
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