#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	try
	{
		Bitcoin::checkArg(argc, argv);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}