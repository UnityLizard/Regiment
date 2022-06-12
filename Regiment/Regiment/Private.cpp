#include "Private.h"

Private::Private(const String& name, const unsigned age)
{
	this->name = name;
	this->age = age;
	active = true;
	specialization = Specializations::Assault;
	medalsCount = 0;
}

String Private::getName() const
{
	String temp("PVT ");
	temp.concat(name);

	return temp;
}

void Private::soldierInfo() const
{
	std::cout << "Name: PVT ";
	generalInfo();
}

void Private::patrol() const
{
	std::cout << "PVT " << name << " is patrolling." << std::endl;
}
