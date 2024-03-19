#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat &wrongCat);
		WrongCat& operator=(const WrongCat &wrongCat);
		void	makeSound(void) const;
};

#endif