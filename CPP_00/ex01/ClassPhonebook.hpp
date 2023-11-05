#ifndef CLASSPHONEBOOK_HPP
#define CLASSPHONEBOOK_HPP

#include <iostream>
#include "ClassContact.hpp"

class PhoneBook{
  private:
	Contact people[8];
  public:
	void			view_phonebook(class PhoneBook);
	void			write_table(std::string);
	void			setter(int, std::string, std::string);
	Contact*		geter();
};


#endif