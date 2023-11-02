#ifndef CLASSCONTACT_HPP
#define CLASSCONTACT_HPP

#include <iostream>

class Contact{	
public:
	std::string name;
	std::string surname;
	std::string nickname;
	std::string phonenumber;
	std::string darksecret;
};

void	contact_parcer();

#endif