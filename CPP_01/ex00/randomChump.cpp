#include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie randomZombie;
	randomZombie.Name = name;
	std::cout << randomZombie.Name << ": " << std::ends;
	announce();
}