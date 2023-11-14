#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
 private:
	std::string name;
	Weapon *Weapon;
 public:
	HumanB(std::string);
	~HumanB(){};
	void	attack();
	void	setWeapon(class Weapon &weapon);
};

#endif