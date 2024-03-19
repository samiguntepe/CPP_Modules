#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout << this->type << " constructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << this->type << " destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = wrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat &wrongCat)
{
    if(this == &wrongCat)
        return *this;
    this->type = wrongCat.getType();
    return *this;
}
