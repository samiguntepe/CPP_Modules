#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b("Bob", 10);
	std::cout << b;
	b.incGrade();
	std::cout << b;
	b.decGrade();
	std::cout << b;
	Bureaucrat be("Jack", 0);
	std::cout << be;
	return 0;
}