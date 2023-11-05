#include "ClassContact.hpp"
#include "ClassPhonebook.hpp"
#include "main.hpp"

void	Contact::contact_parcer(PhoneBook objPhone)
{
	static int count;
	std::string str;

	std::cout << GRAY << "\n****************************" << END << std::endl;
	std::cout << "Name: " << std::ends;
	std::getline(std::cin, str);
	objPhone.setter(count, "name", str); 
	std::cout << "Surname: " << std::ends;
	std::getline(std::cin, str);
	objPhone.setter(count, "surname", str);
	std::cout << "Nickname: " << std::ends;
	std::getline(std::cin, str);
	objPhone.setter(count, "nickname", str);
	std::cout << "Phone number: " << std::ends;
	std::getline(std::cin, str);
	std::cout << "Dark secret: " << std::ends;
	std::getline(std::cin, str);
	std::cout << GRAY << "****************************\n" << END << std::endl;
	count++;
	if (count == 8)
		count = 0;
	return ;
}

std::string	Contact::geter(std::string str){
	if (str == "name")
		return (name);
	else if (str == "surname")
		return (surname);
	else if (str == "nickname")
		return (nickname);
	else if (str == "phonenumber")
		return (phonenumber);
	else if (str == "darksecret")
		return (darksecret);
	else
		return ("(null)");
}

void	Contact::setter(std::string str, std::string command){
	
	if (str == "name")
		name = command;
	else if (str == "surname")
		surname = command;
	else if (str == "nickname")
		nickname = command;
	else if (str == "phonenumber")
		phonenumber = command;
	else if (str == "darksecret")
		darksecret = command;
	else
		return ;
}
