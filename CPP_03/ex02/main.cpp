#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() 
{
    FragTrap fragtrap1("Fraggy1");
    fragtrap1.attack("Target");
    fragtrap1.highFivesGuys();

    std::cout << std::endl;

    return 0;
}