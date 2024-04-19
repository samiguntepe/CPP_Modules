#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string Name;
        bool Is_signed;
	    const int Grad_to_sign;
	    const int Grade_to_execute;
    public:
        class GradeTooHighException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

    public:
        Form();
        ~Form();
        Form(const Form &copy);
        Form &operator=(const Form &obj);
        Form(std::string name, int grade_to_sign, int grade_to_execute);
        void beSigned(Bureaucrat const &obj);
		bool getSigned() const;
		std::string	getName() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif