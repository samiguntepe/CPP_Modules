#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;
class AForm
{
    private:
        const std::string name;
        bool _isSigned;
	    const int gradeToSign;
	    const int gradeToExecute;
	public:
        AForm();
        ~AForm();
        AForm(const AForm &other);
        AForm &operator=(const AForm &other);
        AForm(std::string name, int gradeToSign, int gradeToExecute);
        void beSigned(Bureaucrat const &other);

		std::string	getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

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

		virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif