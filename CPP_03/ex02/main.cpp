#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() 
{
    FragTrap frag("foo");
    frag.attack("target");
    frag.highFivesGuys();

    std::cout << std::endl;

    return 0;
}