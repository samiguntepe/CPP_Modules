#include "Zombie.hpp"

void	announce(void)
{
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getter(void) const
{
	return Name;
}

Zombie::Zombie(std::string name)
{
	Name = name;
}

Zombie::~Zombie()
{
	std::cout << Name << " is died!" << std::endl;
}