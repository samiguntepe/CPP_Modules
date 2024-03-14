#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

 public:
    ScavTrap(const std::string name);
    ScavTrap &operator=(const ScavTrap &obj);
    void attack(const std::string& target);
    ScavTrap(const ScavTrap &copy);
    ScavTrap();
    ~ScavTrap();
    void guardGate();
};

#endif