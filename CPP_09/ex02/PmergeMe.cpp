#include "PmergeMe.hpp"
#include <cstdlib>
#include <cstring>

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(std::list<int> _list, std::deque<int> _deque) : mList(_list), mDeque(_deque) {}

PmergeMe::PmergeMe(const PmergeMe& other) { *this = other; }

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	mList = other.mList;
	mDeque = other.mDeque;
	return *this;
}

void PmergeMe::exitError()
{
	std::cout << "Error" << std::endl;
	exit(1);
}

size_t PmergeMe::isInt(char *s)
{
	for (size_t i = 0; i < strlen(s); ++i) {
		if (!isdigit(s[i]))
			return 0;
	}
	return 1;
}

void PmergeMe::takeArgs(int ac, char** av)
{
	int n;
	for (int i = 1; i < ac; ++i) {
		n = atoi(av[i]);
		if (!isInt(av[i]) || n < 0)
			exitError();
		mList.push_back(n);
		mDeque.push_back(n);
	}
	std::cout << "Before:  ";
	for (int i = 1; i < ac; ++i) {
		if (ac >= 7 && i == 5)
		{
			std::cout << "[...]";
			break;
		}
		std::cout << av[i] << " ";
	}
	std::cout << std::endl;
	size = ac - 1;
}

template<typename T>
void merge(T& Data, int start, int mid, int end)
{
	T left;
    T right;

    typename T::iterator it = Data.begin();
    std::advance(it, start);
    for (int i = start; i <= mid; ++i) {
        left.push_back(*it);
        ++it;
    }

    it = Data.begin();
    std::advance(it, mid + 1);
    for (int i = mid + 1; i <= end; ++i) {
        right.push_back(*it);
        ++it;
    }

    typename T::iterator leftIt = left.begin();
    typename T::iterator rightIt = right.begin();
    typename T::iterator mergedIt = Data.begin();
    std::advance(mergedIt, start);

    while (leftIt != left.end() && rightIt != right.end())
	{
        if (*leftIt <= *rightIt) {
            *mergedIt = *leftIt;
            ++leftIt;
        } else {
            *mergedIt = *rightIt;
            ++rightIt;
        }
        ++mergedIt;
    }

    for (;leftIt != left.end(); ++leftIt, ++mergedIt) {
        *mergedIt = *leftIt;
        ++mergedIt;
    }

    for (;rightIt != right.end(); ++rightIt, ++mergedIt) {
        *mergedIt = *rightIt;
    }
}

template<typename T>
void PmergeMe::insertionSort(T& Data, int first, int second)
{
    typename T::iterator start = Data.begin();
    std::advance(start, first);

    typename T::iterator end = Data.begin();
    std::advance(end, second + 1);

    for (typename T::iterator i = start; i != end; ++i)
    {
        typename T::iterator j = i;
        int tmp = *i;

        while (j != Data.begin() && *(std::prev(j)) > tmp)
        {
            *j = *(std::prev(j));
            --j;
        }
        *j = tmp;
    }
}

template<typename T>
void PmergeMe::mergeInsert(T& Data, int first, int second)
{
	if (second - first > K)
	{
		int i = (first + second) / 2;
		mergeInsert(Data, first, i);
		mergeInsert(Data, i + 1, second);
		merge(Data, first, i, second);
	}
	else
	{
		insertionSort(Data, first, second);
	}
}

void PmergeMe::printTime(timeval tv1, timeval tv2, std::string type)
{
	double timePased = ((double)tv2.tv_usec - (double)tv1.tv_usec) / 1000000;
	std::cout << "Time to process a range of " << size <<  " elements with "
	<< type << " " << std::fixed << timePased << " us." << std::endl;
}

void PmergeMe::mergeMe(int ac, char **av)
{
	takeArgs(ac, av);
	struct timeval tv1, tv2;

	gettimeofday(&tv1, 0);
    mergeInsert(mList, 0, mList.size() - 1);
	gettimeofday(&tv2, 0);
	std::cout << "After:  ";
	int i = 0;
	for (std::list<int>::iterator it = mList.begin(); it != mList.end(); ++it) {
		if (ac >= 7 && i == 4)
		{
			std::cout << "[...]";;
			break ;
		}
		std::cout << *it << " ";
		++i;
	}
	std::cout << std::endl;
	printTime(tv1, tv2, "std::list");
	gettimeofday(&tv1, 0);
    mergeInsert(mDeque, 0, mDeque.size() - 1);
	gettimeofday(&tv2, 0);
	printTime(tv1, tv2, "std::deque");
}