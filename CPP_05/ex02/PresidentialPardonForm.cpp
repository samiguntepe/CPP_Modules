#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5), _target("default"){}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy), _target(copy._target){}

PresidentialPardonForm::~PresidentialPardonForm(void){}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& copy){
	if (this == &copy)
		return *this;
	this->_target = copy._target;
	return *this;
}

void	PresidentialPardonForm::specificExecute(void) const{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

std::ostream &operator<<(std::ostream &o, const PresidentialPardonForm &rhs){
	o << rhs.getName() << " (signed: " << rhs.getSigned() << ", sign grade required: " << rhs.getGradeToSign() << ", exec grade required: " << rhs.getGradeToExecute() << ")";
	return o;
}