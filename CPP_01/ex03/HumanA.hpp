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
	HumanA(std::string _name, class Weapon &obj) : name(_name), Weapon(obj){};
	~HumanA(){};
	void	attack();
};

#endif