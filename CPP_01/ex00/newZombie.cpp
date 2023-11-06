#include "Zombie.hpp"

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie* myZombie;
	myZombie->Name = name;
	return (myZombie);
}