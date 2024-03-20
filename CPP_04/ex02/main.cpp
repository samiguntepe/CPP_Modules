#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
	const AAnimal *j = new Dog();
    const AAnimal *i = new Cat();

    j->makeSound();
    i->makeSound();
    Cat c;
    Dog d;
    c.getBrain()->setIdeas("I am a cat");
    c.getBrain()->setIdeas("I am 100. cat");
    d.getBrain()->setIdeas("I am not a cat");
    std::cout << GREEN << (c.getBrain()->getIdeas()) << END << std::endl;
    std::cout << GREEN << (c.getBrain()->getIdeas()) << END << std::endl;
    std::cout << GREEN << (d.getBrain()->getIdeas()) << END << std::endl;
    delete j;
    delete i;
    return 0;
}