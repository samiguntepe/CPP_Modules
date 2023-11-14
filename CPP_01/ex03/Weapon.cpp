#include "Weapon.hpp"

const std::string&	Weapon::getType()const
{
	return(this->type);
}

void	Weapon::setType(std::string wname)
{
	this->type = wname;
}

Weapon::Weapon(std::string type)
{
	this->setType(type);
}