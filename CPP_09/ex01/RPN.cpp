#include "RPN.hpp"
#include <sstream>
#include <iostream>
#include <cstdlib>

double RPN::evaluate(const std::string& expression)
{
    std::istringstream iss(expression);
    std::stack<double> stack;
    std::string token;

    while (iss >> token)
	{
        if (isOperator(token))
		{
            if (stack.size() < 2)
                throw std::runtime_error("Invalid expression");
            double b = stack.top(); stack.pop();
            double a = stack.top(); stack.pop();
            stack.push(applyOperator(token, a, b));
        }
		else
		{
            char* end;
            double value = std::strtod(token.c_str(), &end);
            if (*end != '\0')
                throw std::runtime_error("Error");
            stack.push(value);
        }
    }
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
