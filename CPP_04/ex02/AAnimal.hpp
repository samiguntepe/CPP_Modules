#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

# define YELLOW		"\033[0;33m"
# define GREEN		"\033[0;32m"
# define END		"\033[0m"

class AAnimal
{
    protected:
        std::string type;
    public:
	AAnimal(void);
    AAnimal(std::string type);
    AAnimal(const AAnimal& src);

    virtual ~AAnimal(void);

    AAnimal& operator=(const AAnimal& rhs);
    
	virtual void	makeSound(void) const = 0;
    std::string		getType(void) const;
};

#endif