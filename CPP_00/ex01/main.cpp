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
	Contact 	objContact;
	PhoneBook 	objPhoneBook;
	std::string command;
	std::cout << PURPLE << "Welcome to my Phone Book\n" << END << std::endl;
	do{
		write_program(&command);
		if (command == "ADD")
		{
			objContact.contact_parcer(objPhoneBook);
			
		}
		else if (command == "SEARCH")
		{
			objPhoneBook.view_phonebook(objPhoneBook);
		}
	}while (command != "EXIT");
}