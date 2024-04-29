#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("default"), Grade(150){}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name)
{
    try
    {
        if(grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            this->Grade = grade;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}


Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    if(this != &obj)
    {
        const_cast<std::string&>(this->Name) = obj.getName();
        this->Grade = obj.Grade;
    }
    return *this;
}

std::string	Bureaucrat::getName() const
{
	return Name;
}

int Bureaucrat::getGrade() const
{
	return Grade;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return os;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

void Bureaucrat::incGrade()
{
	if (Grade == 1)
		throw GradeTooHighException();
	Grade--;
}

void Bureaucrat::decGrade()
{
	if (Grade == 150)
		throw GradeTooLowException();
	Grade++;
}

void Bureaucrat::signAForm(AForm &form)
{
	if (form.getGradeToSign() < this->getGrade())
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because bureaucrat grade is too low" << std::endl;
	}
	else
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
	if (form.getSigned() == false)
	{
		std::cout << this->getName() << " cannot execute " << form.getName() << " because form is not signed" << std::endl;
	}
	else if (form.getGradeToExecute() < this->getGrade())
	{
		std::cout << this->getName() << " cannot execute " << form.getName() << " because bureaucrat grade is too low" << std::endl;
	}
	else
	{
		std::cout << this->getName() << " executes " << form.getName() << std::endl;
		form.execute(*this);
	}
}
