#include "Serializer.hpp"

Serializer::Serializer(void) {}

Serializer::~Serializer(void) {}

Serializer::Serializer(const Serializer& copy) {
	*this = copy;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

Serializer &Serializer::operator=(const Serializer& obj) {
	if (this != &obj)
	{
        *this = obj;
    }
    return *this;
}
