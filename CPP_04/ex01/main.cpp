#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    j->makeSound();
    i->makeSound();
    Cat cat;
    Dog dog;
    cat.getBrain()->setIdeas("I am a cat");
    cat.getBrain()->setIdeas("I am 100. cat");
    dog.getBrain()->setIdeas("I am not a cat");

    std::cout << YELLOW <<  (cat.getBrain()->getIdeas()) << END << std::endl;
    std::cout << YELLOW << (cat.getBrain()->getIdeas()) << END << std::endl;
    std::cout << YELLOW << (dog.getBrain()->getIdeas()) << END << std::endl;

	std::string ideas = cat.getBrain()->getIdeas();
	std::cout << GREEN <<  &ideas <<  END << std::endl;
	std::string ideas2 = dog.getBrain()->getIdeas();
	std::cout << GREEN << &ideas2 << END << std::endl;

	Dog dog1;
    Dog dog2(dog1); // Copy constructor called

    // Check if the brains are deep copies
    assert(dog1.getBrain() != dog2.getBrain());

    std::cout << "The brains are deep copies." << std::endl;

    delete j;
    delete i;
    return 0;
}