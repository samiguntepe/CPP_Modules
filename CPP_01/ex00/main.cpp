#include "Zombie.hpp"

int main()
{
	Zombie sZombie;
	Zombie *hZombie = NULL;
	std::string zName;

	std::cout << "Name the stack Zombie: " << std::ends;
	std::cin >> zName;
	sZombie.randomChump(zName);
	std::cout << "Name the heap Zombie: " << std::ends;
	std::cin >> zName;
	hZombie = hZombie->newZombie(zName);

	delete hZombie;
}