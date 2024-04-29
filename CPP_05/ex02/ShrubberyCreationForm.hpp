#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
    private:
        std::string _target;
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm& copy);
        void specificExecute(void) const;
};

#endif