#ifndef CLASSPHONEBOOK_HPP
#define CLASSPHONEBOOK_HPP

#include <iostream>
#include "ClassContact.hpp"

class PhoneBook{
  private:
	Contact people[8];
  public:
	void			view_phonebook();
	void			write_table(std::string);
	Contact*		geter();
	void			parcer();
};


#endif