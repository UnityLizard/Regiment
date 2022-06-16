#include "Private.h"

Private::Private(const String& name, const unsigned age)
{
	this->name = name;
	this->age = age;
	active = true;
	rank = Rank::Private;
	specialization = Specialization::Assault;
	medalsCount = 0;
}

Soldier* Private::clone() const
{
	return new Private(*this);
}

void Private::patrol() const
{
	rankDisplay();
	std::cout << " " << name << " is patrolling." << std::endl;
}
