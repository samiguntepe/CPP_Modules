#include "Fixed.hpp"

int	Fixed::getRawBits() const
{
	cout << "getRawBits member function called" << endl;
	return num;
}

void	Fixed::setRawBits(int const raw)
{
	num = raw;
}