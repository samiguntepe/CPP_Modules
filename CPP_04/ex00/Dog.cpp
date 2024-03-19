#include "Dog.hpp"

Dog::Dog(void)
{
    type = "Dog";
    std::cout << type << " constructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
    std::cout << "Woof!" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << this->type << " destructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog& Dog::operator=(const Dog &dog)
{
    if(this == &dog)
        return *this;
    this->type = dog.getType();
    return *this;
}
