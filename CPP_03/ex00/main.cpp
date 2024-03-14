#include "ClapTrap.hpp"

int main()
{
    ClapTrap obj("foo");
    obj.attack("boo");
    obj.takeDamage(25);
    obj.attack("boo");
    obj.beRepaired(1);
}