#include <iostream>
#include <cassert>
#include "Dog.h"

int main() {
    Dog dog1;
    Dog dog2(dog1); // Copy constructor called

    // Check if the brains are deep copies
    assert(dog1.getBrain() != dog2.getBrain());

    std::cout << "The brains are deep copies." << std::endl;

    return 0;
}