#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>

int main()
{
    std::vector<int> vec(5);
    std::deque<int> deque;

    for (size_t i = 1; i <= 5; ++i) {
        vec.push_back(i);
        deque.push_back(i);
        deque.push_front(i);
    }

    try {
        std::cout << "\nNumber: " << ::easyfind(vec, 5) << std::endl;
        std::cout << "Number: "<< ::easyfind(deque, 3) << std::endl;
        std::cout << "Number: " << ::easyfind(deque, 10) << std::endl;
    } catch (std::exception & e) {
        std::cout << RED << e.what() << END << std::endl;
    }

    std::cout << BLUE << "Deque elements: " << END << std::endl;
    for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << BLUE << "Vector elements: " << END << std::endl;
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n\n";

    return 0;
}