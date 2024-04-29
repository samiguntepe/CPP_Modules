#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
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
        AForm();
        ~AForm();
        AForm(const AForm &copy);
        AForm &operator=(const AForm &obj);
        AForm(std::string name, int grade_to_sign, int grade_to_execute);
        void beSigned(Bureaucrat const &obj);
		bool getSigned() const;
		std::string	getName() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		virtual void specificExecute(void) const = 0;
		void execute(const Bureaucrat& executor) const;
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif