#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    std::cout << this->type << " constructor called" << std::endl;
    this->brain = new Brain();
}

void	Dog::makeSound(void) const
{
    std::cout << GREEN << "Woof!" << END <<std::endl;
}

Dog::Dog(const Dog& Dog)
{
    *this = Dog;
}

Dog& Dog::operator=(const Dog& Dog)
{
    std::cout << "Dog copy called." << std::endl;
    if (this != &Dog)
    {
        this->type = Dog.type;
        this->brain = new Brain(*Dog.brain);
    }
    return *this;
}

Dog::~Dog(void)
{
    std::cout << this->type << " destructor called" << std::endl;
    delete this->brain;
}

Brain *Dog::getBrain()
{
	return brain;
}
