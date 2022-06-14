#include "Private.h"

Private::Private(const String& name, const unsigned age)
{
	this->name = name;
	this->age = age;
	active = true;
	specialization = Specializations::Assault;
	medalsCount = 0;
}

const char* Private::getRank() const
{
	return "PVT";
}

Soldier* Private::clone() const
{
	return new Private(*this);
}

void Private::patrol() const
{
	std::cout << "PVT " << name << " is patrolling." << std::endl;
}
