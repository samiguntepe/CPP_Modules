#ifndef CLASSPHONEBOOK_HPP
#define CLASSPHONEBOOK_HPP

#include <iostream>
#include "ClassContact.hpp"
class PhoneBook
{	public:
	Contact people[8];
};

void	view_phonebook();
void	write_table(std::string str);

#endif