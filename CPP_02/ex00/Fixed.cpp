#include "Fixed.hpp"

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	value = 0;
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
	return value;
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

Fixed	&Fixed::operator=(const Fixed &newFix)
{
	cout << "Copy assignment operator called" << endl;
	if(this != &newFix)
	{
		this->value = newFix.getRawBits();
	}
	return *this;
}
