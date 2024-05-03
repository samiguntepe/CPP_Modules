#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(void) {
	return;
}

ScalarConverter::~ScalarConverter(void) {
	return;
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy) {
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& obj) {
	if (this != &obj)
	{
        *this = obj;
    }
    return *this;
}

bool	ScalarConverter::isPseudoLiteral(const std::string& str)
{
	return (str == "nan" || str == "nanf" || str == "+inf" || str == "inf"
		|| str == "-inf" || str == "+inff" || str == "inff" || str == "-inff");
}

void	ScalarConverter::convertChar(const std::string& val) {
	if (ScalarConverter::isPseudoLiteral(val))
	{
		std::cout << RED <<  "Impossible" << END <<std::endl;
		return ;
	}
	char c = static_cast<char>(atoi(val.c_str()));
	if (c < 32 || c > 126)
	{
		std::cout << RED << "Non displayable" << END << std::endl;
		return ;
	}
	std::cout << "\'" << c << "\'" << std::endl;
}

void	ScalarConverter::convertInt(const std::string& val) {
	if (ScalarConverter::isPseudoLiteral(val))
	{
		std::cout << RED << "Impossible" << END << std::endl;
		return;
	}
	std::cout << std::atoi(val.c_str()) << std::endl;
}

void	ScalarConverter::convertFloat(const std::string& val) {
	float number = std::atof(val.c_str());
	if (number - static_cast<int>(number) == 0)
	{
		std::cout << number << ".0f" << std::endl;
		return ;
	}
	std::cout << number << "f" << std::endl;
}

void	ScalarConverter::convertDouble(const std::string& val) {
	double number = std::strtod(val.c_str(), NULL);
	if (number - static_cast<int>(number) == 0)
	{
		std::cout << number << ".0" << std::endl;
		return ;
	}
	std::cout << number << std::endl;
}

void	ScalarConverter::convertVal(const std::string& val) {
	std::cout << "Char : "; ScalarConverter::convertChar(val);
	std::cout << "Int : "; ScalarConverter::convertInt(val);
	std::cout << "Float : "; ScalarConverter::convertFloat(val);
	std::cout << "Double : "; ScalarConverter::convertDouble(val);
}

bool	ScalarConverter::isValid(std::string& input) {
	if (ScalarConverter::isPseudoLiteral(input))
		return true;
	else if (input.length() == 1 && std::isalpha(input[0]))
	{
		input = std::to_string(static_cast<int>(input[0]));
		return true;
	}
	for (size_t i = 0; i < input.size(); i++)
	{
		char c = input[i];
		if (!isdigit(c) && c != '-' && c != '+' && c != 'f'
			&& c != '.')
			return false;
	}
	return true;
}
