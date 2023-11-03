#include "ClassContact.hpp"
#include "ClassPhonebook.hpp"
#include "main.hpp"

Contact::contact_parcer(PhoneBook *PhoneBook)
{
	static int count;
	
	std::cout << GRAY << "\n****************************" << END << std::endl;
	std::cout << "Name: " << std::ends;
	std::getline(std::cin, );
	std::cout << "Surname: " << std::ends;
	std::getline(std::cin, PhoneBook->getPeople());
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