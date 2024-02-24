#include "Fixed.hpp"
#include <cmath>

int	Fixed::getRawBits() const
{
	cout << "getRawBits member function called" << endl;
	return num;
}

void	Fixed::setRawBits(int const raw)
{
	num = raw;
}

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	num = 0;
}

Fixed::Fixed(int val)
{
	num = val << bits_num;
	cout << "Int constructor called" << endl;
}

Fixed::Fixed(float val)
{
	cout << "Float constructor called" << endl;
	this->num = roundf(val * 256);
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
		this->num = newFix.num;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return (o);
}

float Fixed::toFloat( void ) const
{
    return ((float)this->num / 256);
}
int Fixed::toInt( void ) const
{
    return (this->num / 256);
}