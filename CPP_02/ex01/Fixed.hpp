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
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed(const Fixed &source);
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed &operator=(const Fixed &newFix);
};

std::ostream &operator<<(std::ostream &out, const Fixed& fixed);

#endif