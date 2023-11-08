#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
 private:
   std::string Name;
 public:
   Zombie(){};
   Zombie(std::string name) : Name(name){}
   Zombie*		zombieHorde(int N, std::string name);
   void			announce(void);
   std::string	get();
};

#endif