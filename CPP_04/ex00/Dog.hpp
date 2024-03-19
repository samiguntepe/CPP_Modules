#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &dog);
		Dog& operator=(const Dog &dog);
		void	makeSound(void) const;
};

#endif