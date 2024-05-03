#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	try
	{
		if (ac != 2)
		{
			throw std::runtime_error("Bad Args !");
		}
		std::string value = (std::string)av[1];
		if (ScalarConverter::isValid(value))
			ScalarConverter::convertVal(value);
		else
			throw std::runtime_error("Bad Value !");
	}
	catch (const std::exception& e)
	{
		std::cout << RED << "Exception: " << e.what() << END << std::endl;
		return 1;
	}
	return 0;
}