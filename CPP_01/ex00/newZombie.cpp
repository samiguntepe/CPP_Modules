#include "Zombie.hpp"

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie *newZombie = new Zombie;
	newZombie->Name = name;
	std::cout << newZombie->Name << std::ends;
	announce();
	return (newZombie);
}

Zombie::~Zombie()
{
	std::cout << this->Name << " is 💀." << std::endl;
}