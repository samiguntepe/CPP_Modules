#include "ClassContact.hpp"
#include "ClassPhonebook.hpp"
#include <iostream>
#include "main.hpp"

void	write_program(std::string* command)
{
		std::cout << SPC << "PhoneBook:" << END << " " << std::ends;
		std::getline(std::cin, *command);
}

int main()
{
	std::string command;
	std::cout << PURPLE << "Welcome to my Phone Book\n" << END << std::endl;
	do{
		write_program(&command);
		if (command == "ADD")
		{
			contact_parcer();
			
		}
		else if (command == "SEARCH")
		{
			view_phonebook();
		}
	}while (command != "EXIT");
}