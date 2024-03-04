#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <fstream>

using std::cout;
using std::endl;

class Fixed
{
 private:
	int value;
	static const int bits_value = 8;
 public:
	Fixed();
	Fixed(int);
	Fixed(float);
	~Fixed();
	Fixed(const Fixed &source);
	int 	getRawBits(void) const;
	void 	setRawBits(int const raw);
	float 	toFloat( void ) const;
	int 	toInt( void ) const;
	Fixed 	&operator=(const Fixed &newFix);
	Fixed	operator+(const Fixed& fixed);
	Fixed	operator-(const Fixed& fixed);
	Fixed	operator*(const Fixed& fixed);
	Fixed	operator/(const Fixed& fixed);
	Fixed&	operator++(void);
	Fixed&	operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);
	bool	operator>(const Fixed& fixed) const;
	bool	operator<(const Fixed& fixed) const;
	bool	operator>=(const Fixed& fixed) const;
	bool	operator<=(const Fixed& fixed) const;
	bool	operator==(const Fixed& fixed) const;
	bool	operator!=(const Fixed& fixed) const;
	static Fixed	&min(Fixed& a, Fixed& b);
	static Fixed	&max(Fixed& a, Fixed& b);
	const static Fixed	&min(const Fixed& a, const Fixed& b);
	const static Fixed	&max(const Fixed& a, const Fixed& b);
};

std::ostream &operator<<(std::ostream &out, const Fixed& fixed);

#endif