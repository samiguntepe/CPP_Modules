#include "Serializer.hpp"
#include <iostream>

int main()
{
	Data data;
	data.a = 42.42f;
	data.b = 21.21f;

	uintptr_t serialized = Serializer::serialize(&data);
	Data* deserialized = Serializer::deserialize(serialized);

	std::cout << "Data a: " << deserialized->a << std::endl;
	std::cout << "Data b: " << deserialized->b << std::endl;

	return 0;
}