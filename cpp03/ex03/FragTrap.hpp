
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const std::string &name);
        FragTrap(const FragTrap &nameOther);
        FragTrap &operator=(const FragTrap &nameOther);
        ~FragTrap();
        void attack(const std::string &target);
        void highFivesGuys(void);
};

#endif