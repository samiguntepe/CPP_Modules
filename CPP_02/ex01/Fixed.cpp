#include "Fixed.hpp"

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	num = 0;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed &source)
{
	cout << "Copy constructor called" << endl;
	*this = source;
}

int	Fixed::getRawBits() const
{
	cout << "getRawBits member function called" << endl;
	return num;
}

void	Fixed::setRawBits(int const raw)
{
	num = raw;
}

Fixed	&Fixed::operator=(const Fixed &newFix)
{
	cout << "Copy assignment operator called" << endl;
	if(this != &newFix)
	{
		this->num = newFix.getRawBits();
	}
	return *this;
}