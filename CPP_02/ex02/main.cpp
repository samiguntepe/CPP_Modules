#include <iostream>
#include "Fixed.hpp"

int main()
{
	Fixed x1(3.0f);
	Fixed x2(3.0f);
	Fixed sum;

	sum = (x1 + x2);

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
}