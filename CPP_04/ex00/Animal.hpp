#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define YELLOW		"\033[0;33m"
# define GREEN		"\033[0;32m"
# define END		"\033[0m"

class Animal
{
    protected:
        std::string type;
    public:
	Animal(void);
    Animal(std::string type);
    Animal(const Animal& copy);

    virtual ~Animal(void);

    Animal& operator=(const Animal& obj);
    
	virtual void	makeSound(void) const;
    std::string		getType(void) const;
};

#endif