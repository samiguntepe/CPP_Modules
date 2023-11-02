#include "ClassContact.hpp"
#include "ClassPhonebook.hpp"
#include "main.hpp"

void	contact_parcer()
{
	static int count;
	Contact classContact;
	PhoneBook classPhonebook;
	std::cout << GRAY << "\n****************************" << END << std::endl;
	std::cout << "Name: " << std::ends;
	std::getline(std::cin, classPhonebook.people[count].name);
	std::cout << "Surname: " << std::ends;
	std::getline(std::cin, classPhonebook.people[count].surname);
	std::cout << "Nickname: " << std::ends;
	std::getline(std::cin, classPhonebook.people[count].nickname);
	std::cout << "Phone number: " << std::ends;
	std::getline(std::cin, classPhonebook.people[count].phonenumber);
	std::cout << "Dark secret: " << std::ends;
	std::getline(std::cin, classPhonebook.people[count].darksecret);
	std::cout << GRAY << "****************************\n" << END << std::endl;
	count++;
	if (count == 8)
		count = 0;
	return ;
}