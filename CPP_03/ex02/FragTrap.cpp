#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->Name = "Default";
    this->hit_point = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap is created!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->Name = name;
    this->hit_point = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap is created!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap is destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    *this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    if(this != &obj)
    {
        this->Name = obj.Name;
        this->hit_point = obj.hit_point;
        this->attack_damage = obj.attack_damage;
        this->energy_points = obj.energy_points;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << Name << " requests a high five!" << std::endl;
}