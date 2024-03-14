#include "ScavTrap.hpp"

int main()
{
    ScavTrap obj("foo");
    obj.attack("boo");
    obj.takeDamage(25);
    obj.attack("boo");
    obj.beRepaired(1);
	obj.guardGate();
}