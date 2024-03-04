#include "Fixed.hpp"
#include <cmath>

int	Fixed::getRawBits() const
{
	cout << "getRawBits member function called" << endl;
	return value;
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
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

float Fixed::toFloat( void ) const
{
    return ((float)this->value / 256);
}
int Fixed::toInt( void ) const
{
	cout << this->value << endl;
    return (this->value / 256);
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

Fixed	&Fixed::max(Fixed& x, Fixed& y)
{
	if (x.getRawBits() >= y.getRawBits())
		return (x);
	return (y);
}

Fixed	&Fixed::min(Fixed& x, Fixed& y)
{
	if (x.getRawBits() < y.getRawBits())
		return (x);
	return (y);
}

const Fixed	&Fixed::max(const Fixed& x, const Fixed& y)
{
	if (x.getRawBits() >= y.getRawBits())
		return (x);
	return (y);
}

const Fixed	&Fixed::min(const Fixed& x, const Fixed& y)
{
	if (x.getRawBits() < y.getRawBits())
		return (x);
	return (y);
}

Fixed	Fixed::operator+(Fixed const& fixed)
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}
Fixed	Fixed::operator-(Fixed const& fixed)
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}
Fixed	Fixed::operator*(Fixed const& fixed)
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}
Fixed	Fixed::operator/(Fixed const& fixed)
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed&	Fixed::operator++()
{
	this->value++;
	return (*this);
}
Fixed&	Fixed::operator--()
{
	this->value--;
	return (*this);
}
Fixed	Fixed::operator++(int)
{
	Fixed original(*this);
	++this->value;
	return (original);
}
Fixed	Fixed::operator--(int)
{
	Fixed original(*this);
	--this->value;
	return (original);
}

bool	Fixed::operator>(Fixed const& fixed) const
{
	return (value > fixed.getRawBits());
}
bool	Fixed::operator<(Fixed const& fixed) const
{
	return (value < fixed.getRawBits());
}
bool	Fixed::operator>=(Fixed const& fixed) const
{
	return (value >= fixed.getRawBits());
}
bool	Fixed::operator<=(Fixed const& fixed) const
{
	return (value <= fixed.getRawBits());
}
bool	Fixed::operator==(Fixed const& fixed) const
{
	return (value == fixed.getRawBits());
}
bool	Fixed::operator!=(Fixed const& fixed) const
{
	return (value != fixed.getRawBits());
}