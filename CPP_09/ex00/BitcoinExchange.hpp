#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define YELLOW		"\033[0;33m"
# define BLUE		"\033[0;34m"
# define END		"\033[m"

# include <iostream>
# include <map>
# include <fstream>


class Bitcoin
{

private:
	static std::string						Input;
	static std::map<std::string, double>	Data;

public:
	static void			checkArg( int index, char **str );
	static void			checkFile( std::string variable);
	static void			setContainerData(void);
	static bool			DateCheck(std::string date);
	static void 		error_what(std::string str, std::string str2);
	static double		setContainer_calculate(std::string date);

	class NotEnoughtInputs : public std::exception
	{
		public:
			virtual const char *what(void) const throw(){
				return ( RED "Error: not enought inputs!" END );
			}
	};

	class TooLargeNumber : public std::exception
	{
		public:
			virtual const char *what(void) const throw(){
				return ( RED "Error: could not open file." END );
			}
	};

	class FileDoesNotExist : public std::exception
	{
		public:
			virtual const char *what(void) const throw(){
				return ( RED "Error: file doesn't exist!" END );
			}
	};

	class EnteredValuesAreIncorrect : public std::exception
	{
		public:
			virtual const char *what(void) const throw()
			{
				return ( RED "Error: Input File Entered Values Are Incorrect." END );
			}
	};

	class EnteredValuesAreIncorrectData : public std::exception
	{
		public:
			virtual const char *what(void) const throw()
			{
				return ( RED "Error: Date File Entered Values Are Incorrect." END );
			}
	};
};
#endif