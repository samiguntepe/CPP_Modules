#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap  is created!" << std::endl;
    this->Name = "Default";
    this->hit_point = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    this->Name = name;
    this->hit_point = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap " << name << " is created!" << std::endl;
}

void ScavTrap::attack(const std::string& target) 
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
    this->energy_points--;
    std::cout << "Scavtrap " << Name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
	std::cout << "ScavTrap " << Name << " has now " << hit_point << " points of life and " << energy_points << " points of energy" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << Name << " is destroyed." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if(this != &other)
    {
        this->attack_damage = other.attack_damage;
        this->energy_points = other.energy_points;
        this->hit_point = other.hit_point;
        this->Name = other.Name;
    }
	std::cout << "ScavTrap Copy assignment operator called"<< std::endl;
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
    std::cout << "ScavTrap Copy Constructor  called"<< std::endl;
    *this = copy;
}

void ScavTrap::guardGate()
{
    std::cout << "**Attention!** ScavTrap " << Name << " is now in Gatekeeper mode!" << std::endl;

}