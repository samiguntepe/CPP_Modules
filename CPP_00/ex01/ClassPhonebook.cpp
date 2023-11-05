#include "ClassPhonebook.hpp"
#include "ClassContact.hpp"
#include <iomanip>
#include "main.hpp"

void	PhoneBook::parcer()
{
	static int count;
	std::string str;

	std::cout << GRAY << "\n****************************" << END << std::endl;
	std::cout << "Name: " << std::ends;
	std::getline(std::cin, str);
	this->people[count].setter("name", str);

	std::cout << "Surname: " << std::ends;
	std::getline(std::cin, str);
	this->people[count].setter("surname", str);

	std::cout << "Nickname: " << std::ends;
	std::getline(std::cin, str);
	this->people[count].setter("nickname", str);

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

void	PhoneBook::view_phonebook()
{
	int count = 0;
	Contact* arr  = this->geter();

	if (this->geter() == NULL)
		return;
	std::cout << "*********************************************" << std::endl;
	while (count < 8)
	{
		if ((arr[count].geter("name")) == "")
			break;
		write_table(std::to_string(count));
		write_table(arr[count].geter("name"));
		write_table(arr[count].geter("surname"));
		write_table(arr[count].geter("nickname"));
		count++;
	}
	std::cout << "*********************************************" << std::endl;

}

void	PhoneBook::write_table(std::string str)
{
	// int size = str.size();
	// std::cout << std::setfill(' ') << std::setw(10 - size);
	std::cout << str << '|' << std::ends;
}

Contact* PhoneBook::geter()
{
	return (people);
}