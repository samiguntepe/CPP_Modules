#include "ClassContact.hpp"

std::string	Contact::geter(std::string str){
	if (str == "name")
		return (this->name);
	else if (str == "surname")
		return (this->surname);
	else if (str == "nickname")
		return (this->nickname);
	else if (str == "phonenumber")
		return (this->phonenumber);
	else if (str == "darksecret")
		return (this->darksecret);
	else
		return ("(null)");
}

void	Contact::setter(std::string str, std::string command){
	
	if (str == "name")
		this->name = command;
	else if (str == "surname")
		this->surname = command;
	else if (str == "nickname")
		this->nickname = command;
	else if (str == "phonenumber")
		this->phonenumber = command;
	else if (str == "darksecret")
		this->darksecret = command;
	else
		return ;
}
