#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde(int N, std::string name)
{
	Zombie *zHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zHorde[i] = Zombie(name);
	}
	return (&zHorde[0]);
}