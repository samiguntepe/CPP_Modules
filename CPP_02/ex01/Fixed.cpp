#include "Fixed.hpp"
#include <cmath>

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

int	Fixed::getRawBits() const
{
	cout << "getRawBits member function called" << endl;
	return value;
}

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	value = 0;
}

Fixed::Fixed(int val)
{
	cout << "Int constructor called" << endl;
	value = val * (1 << bits_value);
}

Fixed::Fixed(float val)
{
	cout << "Float constructor called" << endl;
	this->value = roundf(val * (1 << bits_value));
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

Fixed	&Fixed::operator=(const Fixed &newFix)
{
	cout << "Copy assignment operator called" << endl;
	if(this != &newFix)
	{
		this->value = newFix.value;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

float Fixed::toFloat( void ) const
{
    return ((float)this->value / 256);
}
int Fixed::toInt( void ) const
{
    return (this->value / 256);
}