#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137) {
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy) {
	this->_target = copy._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
	if (this == &copy)
		return *this;
	this->_target = copy._target;
	return *this;
}

void ShrubberyCreationForm::specificExecute(void) const {
	std::ofstream file;
	std::string filename = this->_target + "_shrubbery";
	file.open(filename.c_str());
	file << "      /\\      " << std::endl;
	file << "     /\\*\\     " << std::endl;
	file << "    /\\O\\*\\    " << std::endl;
	file << "   /*/\\/\\/\\   " << std::endl;
	file << "  /\\O\\/\\*\\/\\  " << std::endl;
	file << " /\\*\\/\\*\\/\\/\\ " << std::endl;
	file << "/\\O\\/\\/*/\\/O/\\" << std::endl;
	file << "      ||      " << std::endl;
	file << "      ||      " << std::endl;
	file << "      ||      " << std::endl;
	file << std::endl;
	file.close();
}


std::ostream &operator<<(std::ostream &o, const ShrubberyCreationForm &rhs) {
	o << rhs.getName() << " (signed: " << rhs.getSigned() << ", sign grade required: " << rhs.getGradeToSign() << ", exec grade required: " << rhs.getGradeToExecute() << ")";
	return o;
}