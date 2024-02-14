#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

using std::cout;
using std::endl;

class Fixed
{
 private:
	int num;
	static const int bits_num = 8;
 public:
	Fixed() : num(0){
		cout << "Default constructor called" << endl;
	};
	~Fixed(){
		cout << "Destructor called" << endl;
	};
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif