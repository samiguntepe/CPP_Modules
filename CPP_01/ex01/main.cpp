#include "Zombie.hpp"

int main()
{
	std::string input;
	Zombie 		*newZombie = NULL;
	int			inNumber;
	std::cout << "Name of the zombies: ";
	std::cin >> input;
	std::cout << "Number of the zombies: ";
	std::cin >> inNumber;
	newZombie = newZombie->zombieHorde(inNumber, input);

	for (int i = 0; i < inNumber; i++)
	{
		std::cout << newZombie->get() << std::ends;
		newZombie[i].announce();
		// delete newZombie++;
	}
}