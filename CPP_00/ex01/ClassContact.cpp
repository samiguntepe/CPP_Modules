#include "ClassContact.hpp"
#include "main.hpp"

void	contact_parcer()
{
	Contact classContact;
	std::cout << GRAY << "\n****************************" << END << std::endl;
	std::cout << "Name: " << std::ends;
	std::getline(std::cin, classContact.name);
	std::cout << "Surname: " << std::ends;
	std::getline(std::cin, classContact.surname);
	std::cout << "Nickname: " << std::ends;
	std::getline(std::cin, classContact.nickname);
	std::cout << "Dark secret: " << std::ends;
	std::getline(std::cin, classContact.darksecret);
	std::cout << GRAY << "****************************" << END << std::endl;
	return ;
}