#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

using std::cout;
using std::endl;

class Fixed
{
 private:
	int value;
	static const int bits_value = 8;
 public:
	Fixed();
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed(const Fixed &source);
	Fixed &operator=(const Fixed &newFix);
};

#endif