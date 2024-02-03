#include "Zombie.hpp"

int main()
{
	std::string zName;
	std::cout << "Name the heap Zombie: " << std::ends;
	std::cin >> zName;
	Zombie *newzomb =  newZombie(zName);
	std::cout << "Name the stack Zombie: " << std::ends;
	std::cin >> zName;
	randomChump(zName);
	delete newzomb;
}