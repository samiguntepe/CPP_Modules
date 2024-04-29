#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy) {
	this->_target = copy._target;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	return ;
}

void	RobotomyRequestForm::specificExecute(void) const {
	std::cout << "*drilling noises*" << std::endl;
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << this->_target << " robotomization failed." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {
	if (this == &copy)
		return *this;
	this->_target = copy._target;
	return *this;
}

std::ostream &operator<<(std::ostream &o, const RobotomyRequestForm &rhs) {
	o << rhs.getName() << " (signed: " << rhs.getSigned() << ", sign grade required: " << rhs.getGradeToSign() << ", exec grade required: " << rhs.getGradeToExecute() << ")";
	return o;
}