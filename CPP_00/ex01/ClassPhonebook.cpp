#include "ClassPhonebook.hpp"
#include "ClassContact.hpp"
#include <iomanip>

void	view_phonebook()
{
	static int count;
	Contact classContact;
	PhoneBook classPhonebook;
	std::cout << "*********************************************" << std::endl;
	write_table(std::to_string(count));
	write_table(classPhonebook.people[count].name);
	write_table(classPhonebook.people[count].surname);
	write_table(classPhonebook.people[count].nickname);
	std::cout << "*********************************************" << std::endl;
}

void	write_table(std::string str)
{
	// int size = str.size();
	// std::cout << std::setfill(' ') << std::setw(10 - size);
	std::cout << str << '|';
}