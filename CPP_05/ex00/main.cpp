#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b("Bob", 10);
	std::cout << b << std::endl;
	b.incGrade();
	std::cout << b << std::endl;
	b.decGrade();
	std::cout << b << std::endl;
	Bureaucrat be("Jack", -8);
	std::cout << be << std::endl;
	return 0;
}