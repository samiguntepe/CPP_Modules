#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    {
        try {
        Bureaucrat a("Mark", 25);
        Bureaucrat b("Jeff", 1);
        AForm* rqf = new RobotomyRequestForm("Robot");
        PresidentialPardonForm ppf("Dart Vader");
        
        a.signAForm(*rqf);
        a.signAForm(ppf);
        a.executeForm(*rqf);
        a.executeForm(ppf);
        b.executeForm(ppf);
        
        delete rqf;
        }
        catch (std::exception &e) {
            std::cout << "Exception caught: " << e.what() << std::endl;
        }
    }
    {
        Bureaucrat a("Tomy");
        ShrubberyCreationForm scf("Home");
        a.executeForm(scf);
        a.signAForm(scf);
        for (size_t i = 0; i < 10; ++i) {
            a.increaseGrade();
        }
        a.signAForm(scf);
        a.executeForm(scf);
        for (size_t i = 0; i < 10; ++i) {
            a.increaseGrade();
        }
        a.executeForm(scf);
    }
}