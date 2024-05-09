#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <stdbool.h>
#include <algorithm>
#include <iostream>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define END "\033[0m"

class NumberNotFoundException: public std::exception {
    const char* what() const throw() {
        return ("Number not found!");
    }
};

template<typename T>
std::string easyfind(T container, int _find)
{
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), _find);
    if (it != container.end())
        return (GREEN"Number is found!"END);
    throw NumberNotFoundException();
}

#endif