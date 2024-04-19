#include "Form.hpp"

Form::Form() : Name("Form"), Is_signed(false), Grad_to_sign(1), Grade_to_execute(150){}

Form::~Form(){}

Form::Form(const Form &copy) : Name(copy.getName()), Grad_to_sign(copy.getGradeToSign()), Grade_to_execute(copy.getGradeToExecute())
{
	*this = copy;
}

Form &Form::operator=(const Form &obj)
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

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : Name(name), Is_signed(false), Grad_to_sign(grade_to_sign), Grade_to_execute(grade_to_execute) 
{
	try
	{
		if(grade_to_sign > 150 || grade_to_execute > 150)
			throw Form::GradeTooLowException();
		else if (grade_to_sign < 1 || grade_to_execute < 1)
			throw Form::GradeTooHighException();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

std::string	Form::getName() const
{
	return Name;
}

bool Form::getSigned() const
{
	return Is_signed;
}

int Form::getGradeToSign() const
{
	return Grad_to_sign;
}

int Form::getGradeToExecute() const
{
	return Grade_to_execute;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream &os, const Form &form)
{
	os << form.getName() << ", form grade to sign " << form.getGradeToSign() << ", form grade to execute " << form.getGradeToExecute() << ", form is signed " << form.getSigned() << std::endl;
	return os;
}

void Form::beSigned(Bureaucrat const &obj)
{
	if(obj.getGrade() <= Grad_to_sign)
		Is_signed = true;
	else
		throw Form::GradeTooLowException();
}

