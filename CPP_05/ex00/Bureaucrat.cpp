#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}
Bureaucrat::~Bureaucrat(){}

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

std::string Bureaucrat::getName() const
{
	return Name;
}

int Bureaucrat::getGrade() const
{
	return Grade;
}

void Bureaucrat::setGrade(int grade)
{
	Grade = grade;
}

void Bureaucrat::setName(std::string name)
{
	const_cast<std::string&>(Name) = name;
}