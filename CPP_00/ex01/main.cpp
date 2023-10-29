#include "ClassContact.hpp"
#include "ClassPhonebook.hpp"
#include <iostream>
#include "main.hpp"

int main()
{
	std::string command;
	std::cout << YELLOW << "Welcome to my Phone Book\n" << END << std::endl;
	write_program(&command);
	while (1)
	{
			if (command == "ADD")
			{
				contact_parcer();
				break;
			}
			else if (command == "SEARCH")
			{
				std::cout << "arandı";
				break;
			}
			else if (command == "EXIT")
				return (0);
			else
				write_program(&command);
	}
}