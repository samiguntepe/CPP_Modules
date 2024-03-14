#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->Name = " ";
    this->hit_point = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    std::cout << "ClapTrap " << Name << " is created." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " is destroyed." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    if(this != &obj)
    {
        this->Name = obj.Name;
        this->attack_damage = obj.attack_damage;
        this->hit_point = obj.hit_point;
        this->energy_points = obj.energy_points;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &source)
{
    *this = source;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->Name = name;
    this->hit_point = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    std::cout << "ClapTrap " << Name << " is created!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(energy_points < 0)
    {
		std::cout << "No energy points left" <<std::endl;
        return ;     
    }
    if(hit_point < 0)
    {
		std::cout << "No hit points left" <<std::endl;
        return ;
    }  
    std::cout << "ClapTrap " << Name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
    this->energy_points--;
    std::cout << "ClapTrap " << Name << " has now " << hit_point << " points of life and " << energy_points << " points of energy" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
    this->hit_point -= amount;
    if(this->hit_point < 0)
    {
        this->hit_point = 0;
        std::cout << "No enough hit points left" <<std::endl;
		return;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(energy_points < 0)
    {
        std::cout << "No energy points left" <<std::endl;
        return ;
    }
    std::cout << "ClapTrap " << Name << " repairs itself for " << amount << " hit points!" << std::endl;
    this->hit_point += amount;
    this->energy_points--;
    if(this->hit_point < 0)
        this->hit_point = 0;
}