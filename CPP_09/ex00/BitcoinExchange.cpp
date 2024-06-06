#include "BitcoinExchange.hpp"

std::string			Bitcoin::Input;
std::map<std::string, double>	Bitcoin::Data;

void	Bitcoin::checkArg(int argc, char **argv)
{
	if(argc > 2)
		throw(NotEnoughtInputs());
	else if(argc < 2)
		throw(TooLargeNumber());
	Bitcoin::checkFile(argv[1]);
}

void Bitcoin::error_what(std::string str, std::string str2)
{
	if(str2 != "NULL")
		std::cout << RED << str << str2 << END << std::endl;
	else
		std::cout << RED << str << END << std::endl;
}

bool Bitcoin::DateCheck(std::string date)
{
	size_t pos1;
	size_t pos2;
	std::string date_day;
	std::string date_month;
	std::string date_year;

	pos1 = date.find("-");
    pos2 = date.find("-", pos1 + 1);
    date_year = date.substr(0, pos1);
    date_day = date.substr(pos2 + 1);
    date_month = date.substr(pos1 + 1, pos2 - pos1 - 1);
	if(date_year.length() == 4 || date_month.length() == 2 || date_day.length() == 2)
	{
		if(std::atoi(date_year.c_str()) <= 2008)
			error_what("Error: bad input => ", date);
		else if(std::atoi(date_month.c_str()) > 12 || std::atoi(date_month.c_str()) < 1)
			error_what("Error: bad input => *", date);
		else if(std::atoi(date_day.c_str()) > 31 || std::atoi(date_day.c_str()) < 1)
			error_what("Error: bad input => ", date);
		else if(date_month == "4" || date_month == "6" || date_month == "9" || date_month == "11")
		{
			if(std::atoi(date_day.c_str()) > 30 || std::atoi(date_day.c_str()) < 1)
				error_what("Error: bad input => ", date);
		}
		else if(std::atoi(date_year.c_str()) == 2009 && std::atoi(date_month.c_str()) == 1 && std::atoi(date_day.c_str()) == 1)
			error_what("Error: bad input => ", date);
		else if(std::atoi(date_year.c_str()) > 2022)
			error_what("Error: bad input => ", date);
		else if(std::atoi(date_year.c_str()) % 4 == 0)
		{
			if (std::atoi(date_month.c_str()) == 2 && std::atoi(date_day.c_str()) > 29)
			{
				error_what("Error: bad input => ", date);
			}
			else
				return (true);
		}
		else if (std::atoi(date_month.c_str()) == 2 && std::atoi(date_day.c_str()) > 28)
			error_what("Error: bad input => ", date);
		else
			return (true);
		return (false);
	}
	else
		return (false);

}

void Bitcoin::checkFile(std::string argv)
{
	std::ifstream inputFileStream;
	size_t delimiterPos;
	std::string date;
	std::string tempBtcValue;

	Bitcoin::setContainerData();

	inputFileStream.open(argv.c_str());
	if(!inputFileStream.is_open())
	{
		throw(FileDoesNotExist());
	}
	Input = argv;
	getline(inputFileStream, argv);
	if(argv.compare("date | value"))
	{
		error_what("Error: at the beginning of the file should be 'date | value'", "NULL");
		return ;
	}
	while (getline(inputFileStream, argv))
	{
		delimiterPos = argv.find("|");
		date = argv.substr(0, delimiterPos);
		delimiterPos = date.find(" ");
		date = date.substr(0,delimiterPos);
		delimiterPos = argv.find("|");
		if(delimiterPos == std::string::npos)
		{
			error_what("Error: bad input => ", date);
			continue;
		}
		tempBtcValue = argv.substr(delimiterPos, argv.length());
		delimiterPos = tempBtcValue.find(" ") + 1;
		tempBtcValue = tempBtcValue.substr(delimiterPos, tempBtcValue.length());
		if(Bitcoin::DateCheck(date) == false)
			continue;
		if(!tempBtcValue.compare("|"))
		{
			error_what("Error: Input File Entered Values Are Incorrect.", "NULL");
			continue;
		}
		if(std::strtod(tempBtcValue.c_str(), NULL) < 0)
		{
			error_what("Error: not a positive number.", "NULL");
			continue;
		}
		if(std::strtod(tempBtcValue.c_str(), NULL) > 1000)
		{
			error_what("Error: number not less than 1000.", "NULL");
			continue;
		}
		if(Bitcoin::setContainer_calculate(date) * std::strtod(tempBtcValue.c_str(), NULL) > INT_MAX)
		{
			error_what("Error: too large a number.", "NULL");
			continue;
		}
		std::cout << date << " => " << tempBtcValue << " = "<< std::ends;
		std::cout << Bitcoin::setContainer_calculate(date) * std::strtod(tempBtcValue.c_str(), NULL) << std::endl;
		continue;
	}
	inputFileStream.close();
}

void Bitcoin::setContainerData(void)
{
	std::ifstream file("data.csv");
	if(!file)
		throw(EnteredValuesAreIncorrect());
	std::string line;
	std::string date;
	std::string tempBtcValue;
	double btc_value;
	size_t delimiterPos;

	getline(file,line);
	while(getline(file, line))
	{
		delimiterPos = line.find(",");
		if(delimiterPos == std::string::npos)
			throw(EnteredValuesAreIncorrect());
		date = line.substr(0,delimiterPos);
		tempBtcValue = line.substr(delimiterPos+1, line.length());
		btc_value = std::strtod(tempBtcValue.c_str(), NULL);
		Data[date] = btc_value;
	}
	file.close();
}

double Bitcoin::setContainer_calculate(std::string date)
{
	std::map<std::string, double>::iterator m;
	m = Bitcoin::Data.find(date);
	if(m == Bitcoin::Data.end())
		m = --Bitcoin::Data.upper_bound(date);
	return (m->second);
}