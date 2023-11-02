#include "ClassContact.hpp"
#include "ClassPhonebook.hpp"
#include <iostream>
#include "main.hpp"

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