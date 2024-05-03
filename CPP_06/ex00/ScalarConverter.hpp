#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define END "\033[0m"

#define IS_IN_INT_RANGE(value) ((value >= -2147483647 - 1) && (value <= 2147483647))

class ScalarConverter {
    private:
        ScalarConverter(void);
        ~ScalarConverter(void);
        ScalarConverter(const ScalarConverter& copy);
        ScalarConverter &operator=(const ScalarConverter& obj);
    public:
		static bool isValid(std::string& input);
		static bool isPseudoLiteral(const std::string& str);
		static void convertChar(const std::string& val);
		static void convertInt(const std::string& val);
		static void convertFloat(const std::string& val);
		static void convertDouble(const std::string& val);
		static void convertVal(const std::string& val);
};

#endif