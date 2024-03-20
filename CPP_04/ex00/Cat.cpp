#include "Cat.hpp"

Cat::Cat(void)
{
   type = "Cat";
    std::cout << type << " constructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
    std::cout << YELLOW << "Meow!" << END << std::endl;
}

Cat::~Cat(void)
{
    std::cout << this->type << " destructor called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

Cat& Cat::operator=(const Cat &cat)
{
    if(this == &cat)
        return *this;
    this->type = cat.getType();
    return *this;
}
