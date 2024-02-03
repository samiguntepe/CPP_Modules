#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
 private:
    std::string Name;
 public:
    Zombie(std::string name);
    ~Zombie();
	std::string getter(void) const;
};

void    announce(void);
void    randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif