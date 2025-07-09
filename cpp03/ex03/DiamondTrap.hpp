
#ifndef DIAMOND_HPP
#define DIAMOND_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string &name);
        DiamondTrap(const DiamondTrap &nameOther);
        DiamondTrap &operator=(const DiamondTrap &nameOther);
        ~DiamondTrap();
        void attack(const std::string &target);
        void whoAmI();
};

#endif