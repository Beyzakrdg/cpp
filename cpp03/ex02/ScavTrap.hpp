
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(const std::string &name);
    ScavTrap(const ScavTrap &nameOther);
    ScavTrap &operator=(const ScavTrap &nameOther);
    ~ScavTrap();
    void attack(const std::string &target);
    void guardGate();
};

#endif