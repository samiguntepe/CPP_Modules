#ifndef CLASSCONTACT_HPP
#define CLASSCONTACT_HPP

#include <iostream>
#include "ClassPhonebook.hpp"

class Contact{	
  private:
	std::string name;
	std::string surname;
	std::string nickname;
	std::string phonenumber;
	std::string darksecret;
  public:

	void	contact_parcer(PhoneBook *PhoneBook);
};


#endif