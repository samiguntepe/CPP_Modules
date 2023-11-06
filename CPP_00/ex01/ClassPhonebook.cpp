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
	write_table("INDEX");
	write_table("NAME");
	write_table("SURNAME");
	write_table("NICKNAME");
	std::cout << "\n*********************************************" << std::endl;


	while (count < 8)
	{
		if ((arr[count].geter("name")) == "")
			break;
		write_table(std::to_string(count));
		write_table(arr[count].geter("name"));
		write_table(arr[count].geter("surname"));
		write_table(arr[count].geter("nickname"));
		std::cout << '\n';
		count++;
	}
	std::cout << "*********************************************" << std::endl;

}

void	PhoneBook::write_table(std::string str)
{
	static int count;
	int size = str.size();
	if (count == 0)
		std::cout << '*' << std::ends;
	count++;

	if (size > 10)
	{
		str = str.substr(0, 9);
		std::cout << str << std::ends;
	}else
		std::cout << std::setw(10) << str << std::ends;

	if (size > 10)
	{
		std::cout << '.' << std::ends;
	}

	if (count != 4)
		std::cout << '|' << std::ends;
	else if (count == 4)
	{
		std::cout << '*' << std::ends;
		count = 0;
	}
}

Contact* PhoneBook::geter()
{
	return (people);
}