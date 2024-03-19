#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
    this->type = "AAnimal";
    std::cout << this->type << " constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
    std::cout << "AAnimal " << this->type << " constructor called" << std::endl;
    this->type = type;
}

AAnimal::AAnimal(const AAnimal &animal)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = animal;
}

std::string AAnimal::getType(void) const
{
    return this->type;
}

AAnimal& AAnimal::operator=(const AAnimal& animal)
{
    this->type = animal.getType();
    return *this;
}

AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal destructor called" << std::endl;
}