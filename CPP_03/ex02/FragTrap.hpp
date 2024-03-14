#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>

class FragTrap : public ClapTrap
{

    public:
        FragTrap();
        ~FragTrap();
        FragTrap(const FragTrap &copy);
        FragTrap &operator=(const FragTrap &obj);
        FragTrap(std::string name);
        void highFivesGuys(void);
};

#endif