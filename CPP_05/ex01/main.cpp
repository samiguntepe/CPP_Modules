#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bureaucrat_1("Manager", 120);
	Bureaucrat bureaucrat_2("Assistant", 50);
	
	std::cout << bureaucrat_1;
	std::cout << bureaucrat_2;

	Form form_1("Form_1", 5, 10);
	Form form_2("Form_2", 40, 100);

	std::cout << form_1;
	std::cout << form_2;

	bureaucrat_1.signForm(form_1);
	bureaucrat_1.signForm(form_2);

	std::cout << form_1;
	std::cout << form_2;

	return 0;
}