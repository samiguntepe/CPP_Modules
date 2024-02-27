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
	cout << "Int constructor called" << endl;
	num = val * (1 << bits_num);
}

Fixed::Fixed(float val)
{
	cout << "Float constructor called" << endl;
	this->num = roundf(val * (1 << bits_num));
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

float Fixed::toFloat( void ) const
{
    return ((float)this->num / 256);
}
int Fixed::toInt( void ) const
{
	cout << this->num << endl;
    return (this->num / 256);
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

Fixed Fixed::operator+(const Fixed &fixed_num)
{
	Fixed sum = this->num + fixed_num.num;
	return sum;
}

std::ostream &operator<<(std::ostream &out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}