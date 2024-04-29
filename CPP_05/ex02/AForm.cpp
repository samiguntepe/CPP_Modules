#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : Name("AForm"), Is_signed(false), Grad_to_sign(1), Grade_to_execute(150){}

AForm::~AForm(){}

AForm::AForm(const AForm &copy) : Name(copy.getName()), Grad_to_sign(copy.getGradeToSign()), Grade_to_execute(copy.getGradeToExecute())
{
	*this = copy;
}

AForm &AForm::operator=(const AForm &obj)
{
	if(this != &obj)
	{
		const_cast<std::string&>(this->Name) = obj.getName();
		this->Is_signed = obj.getSigned();
		const_cast<int&>(this->Grad_to_sign) = obj.getGradeToSign();
		const_cast<int&>(this->Grade_to_execute)= obj.getGradeToExecute();
	}
	return *this;
}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_execute) : Name(name), Is_signed(false), Grad_to_sign(grade_to_sign), Grade_to_execute(grade_to_execute) 
{
	try
	{
		if(grade_to_sign > 150 || grade_to_execute > 150)
			throw AForm::GradeTooLowException();
		else if (grade_to_sign < 1 || grade_to_execute < 1)
			throw AForm::GradeTooHighException();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

std::string	AForm::getName() const
{
	return Name;
}

bool AForm::getSigned() const
{
	return Is_signed;
}

int AForm::getGradeToSign() const
{
	return Grad_to_sign;
}

int AForm::getGradeToExecute() const
{
	return Grade_to_execute;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream &os, const AForm &AForm)
{
	os << AForm.getName() << ", AForm grade to sign " << AForm.getGradeToSign() << ", AForm grade to execute " << AForm.getGradeToExecute() << ", AForm is signed " << AForm.getSigned() << std::endl;
	return os;
}

void AForm::beSigned(Bureaucrat const &obj)
{
	if(obj.getGrade() <= Grad_to_sign)
		Is_signed = true;
	else
		throw AForm::GradeTooLowException();
}

void AForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > Grade_to_execute)
		throw AForm::GradeTooLowException();
	if (!Is_signed)
		throw AForm::GradeTooLowException();
	specificExecute();
}

