#include <iostream>
#include <string>
#include <fstream>

std::string	fileReplace(std::string str, std::string target, std::string replacement)
{
    size_t pos = str.find(target);

    while (pos != std::string::npos)
	{
        str = str.substr(0, pos) + replacement + str.substr(pos + target.length());
        pos = str.find(target, pos + replacement.length());
    }
    return (str);
}

std::string	fileRead(std::string filename)
{
	std::ifstream	file(filename);
	std::string		text;

	if (!file.is_open())
	{
		std::cout << "File is not opened." << std::endl;
		exit(1);
	}
	std::getline(file, text, '\0');
	file.close();
	return (text);
}

void	fileWrite(std::string filename, std::string text)
{
	std::ofstream file(filename+= ".replace");

	if (!file.is_open())
	{
		std::cout << "File is not created." << std::endl;
		exit(1);
	}
	file << text << std::ends;
	file.close();
}