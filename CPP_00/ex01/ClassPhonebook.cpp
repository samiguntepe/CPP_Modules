#include "ClassPhonebook.hpp"
#include "ClassContact.hpp"
#include <iomanip>

void	PhoneBook::view_phonebook(class PhoneBook objPhone)
{
	// int count = 0;
	// Contact* arr  = objPhone.geter();


	std::cout << "NAME:" <<objPhone.geter()[0].geter("name");
	if (objPhone.geter() == NULL)
		return;
	// std::cout << "*********************************************" << std::endl;
	// while (count < 8)
	// {
	// 	if ((arr[count].geter("name")) == "")
	// 		break;
	// 	write_table(std::to_string(count));
	// 	write_table(arr[count].geter("name"));
	// 	write_table(arr[count].geter("surname"));
	// 	write_table(arr[count].geter("nickname"));
	// 	count++;
	// }
	// std::cout << "*********************************************" << std::endl;

}

void	PhoneBook::write_table(std::string str)
{
	// int size = str.size();
	// std::cout << std::setfill(' ') << std::setw(10 - size);
	std::cout << str << '|' << std::ends;
}

void PhoneBook::setter(int i, std::string type, std::string str)
{
	people[i].setter(type, str);
}

Contact* PhoneBook::geter()
{
	return (people);
}