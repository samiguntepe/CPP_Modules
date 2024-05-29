#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>
#include <stdexcept>

# define RED		"\033[0;31m"
# define END		"\033[m"

class RPN {
public:
    double	evaluate(const std::string& expression);
	// void	check_input(std::string &argv);

private:
    bool isOperator(const std::string& token);
    double applyOperator(const std::string& op, double a, double b);
};

#endif
