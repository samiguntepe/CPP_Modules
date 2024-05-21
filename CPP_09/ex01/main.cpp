#include <iostream>
#include <string>
#include "RPN.hpp"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <expression>" << std::endl;
        return 1;
    }
    
    try 
	{
        RPN rpn;
        double result = rpn.evaluate(argv[1]);
        std::cout << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << RED << e.what() << END << std::endl;
        return 1;
    }

    return 0;
}
