#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie zombie(name);
	std::cout << name << std::ends;
	announce();
}