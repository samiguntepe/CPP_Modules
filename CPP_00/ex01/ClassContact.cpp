#include "ClassContact.hpp"
#include "main.hpp"

void	contact_parcer()
{
	Contact classContact;
	std::cout << GRAY << "\n****************************" << END << std::endl;
	std::cout << "Name: " << std::ends;
	std::cin >> classContact.name;
	std::cout << "Surname: " << std::ends;
	std::cin >> classContact.surname;
	std::cout << "Nickname: " << std::ends;
	std::cin >> classContact.nickname;
	std::cout << "Dark secret: " << std::ends;
	std::cin >> classContact.darksecret;
	std::cout << "\n****************************\n";
}