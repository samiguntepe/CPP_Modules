#include "HumanB.hpp"
#include "Weapon.hpp"

void	HumanB::attack()
{
	 if (this->Weapon != NULL && this->Weapon->getType() != "") {
        std::cout << name << " attacks with their " << this->Weapon->getType() << std::endl;
    } else {
        std::cout << name << " doesn't have a weapon to attack." << std::endl;
    }
}

void	HumanB::setWeapon(class Weapon &weapon)
{
	this->Weapon = &weapon;
}

HumanB::HumanB(std::string _name)
{
	this->name = _name;
	this->Weapon = NULL;
}