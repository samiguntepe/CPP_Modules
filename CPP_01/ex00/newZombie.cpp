#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie *newzombie = new Zombie(name);
	std::cout << newzombie->getter() << std::ends;
	announce();
	return (newzombie);
}