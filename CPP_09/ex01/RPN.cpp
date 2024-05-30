#include "RPN.hpp"
#include <sstream>
#include <iostream>
#include <cstdlib>

double RPN::evaluate(const std::string& expression)
{
	std::istringstream iss(expression);
	std::stack<double> stack;
	std::string token;
	int op_count = 0;

	while (iss >> token)
	{
		if (isOperator(token))
		{
			if (!(stack.size() == 2 || stack.size() == 3))
				throw std::runtime_error("Invalid expression");
			double b = stack.top(); stack.pop();
			double a = stack.top(); stack.pop();
			stack.push(applyOperator(token, a, b));
			op_count++;
		}
		else
		{
			char* end;
			double value = std::strtod(token.c_str(), &end);
			if (value < 0 || value > 9)
			{
				throw std::runtime_error("Error");
			}
			if (*end != '\0')
				throw std::runtime_error("Error");
			stack.push(value);
			op_count = 0;
		}
	}
	if (op_count == 0)
		throw std::runtime_error("Invalid expression");
	return stack.top();
}

bool RPN::isOperator(const std::string& token) {
	return token == "+" || token == "-" || token == "*" || token == "/";
}

double RPN::applyOperator(const std::string& op, double a, double b) {
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    if (op == "/") {
        if (b == 0) {
            throw std::runtime_error("Division by zero");
        }
        return a / b;
    }
    throw std::runtime_error("Unknown operator: " + op);
}
