#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Bureaucrat b("Bureaucrat", 1);
	AForm *rrf;
	AForm *scf;
	AForm *ppf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	ppf = someRandomIntern.makeForm("presidential pardon", "Bender");

	b.signForm(*rrf);
	b.signForm(*scf);
	b.signForm(*ppf);

	b.executeForm(*rrf);
	b.executeForm(*scf);
	b.executeForm(*ppf);

	delete rrf;
	delete scf;
	delete ppf;
	return 0;
}