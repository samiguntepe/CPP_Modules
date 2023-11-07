#include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	this->Name = name;
	std::cout << this->Name << std::ends;
	announce();
}