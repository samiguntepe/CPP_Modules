#include "ClassContact.hpp"
#include "ClassPhonebook.hpp"
#include <iostream>
#include "main.hpp"

int main()
{
	std::string command;
	std::cout << PURPLE << "Welcome to my Phone Book\n" << END << std::endl;
	write_program(&command);
	do{
			if (command == "ADD")
			{
				contact_parcer();
				break;
			}
			else if (command == "SEARCH")
			{
				view_phonebook();
			}
			else if (command != "EXIT")
				write_program(&command);
	}while (command != "EXIT");
}