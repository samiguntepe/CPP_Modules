#ifndef CLASSCONTACT_HPP
#define CLASSCONTACT_HPP

#include <iostream>

class Contact{	
  private:
	std::string name;
	std::string surname;
	std::string nickname;
	std::string phonenumber;
	std::string darksecret;
  public:
	void		contact_parcer(class PhoneBook);
	std::string	geter(std::string);
	void setter(std::string, std::string);
};


#endif