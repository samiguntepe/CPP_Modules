#include <iostream>
#include <string>
#include "ClassContact.hpp"
#include "main.hpp"

void	write_program(std::string* command)
{
		std::cout << SPC << "PhoneBook:" << END << " " << std::ends;
		std::getline(std::cin, *command);
}