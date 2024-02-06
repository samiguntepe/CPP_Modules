#include "replace.hpp"

int main(int argc, char **argv)
{
	std::string	lines;
	if (argc != 4)
	{
		std::cout << "Usage: ./replace <filename> <target> <replace>" << std::endl;
		exit(1);
	}
	lines = fileRead(argv[1]);
	lines = fileReplace(lines, argv[2], argv[3]);
	fileWrite(argv[1], lines);
}