#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
 private:
	std::string name;
	Weapon &Weapon;
 public:
	HumanA(std::string _name, class Weapon &wep) : name(_name), Weapon(wep){};
	~HumanA(){};
	void	attack();
};

#endif