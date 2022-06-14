#include "Colonel.h"

Colonel::Colonel(const Soldier* other)
{
	name = other->getName();
	age = other->getAge();
	active = other->isActive();
	specialization = other->getSpecialization();
	medalsCount = other->getMedalsCount();
	for (size_t i = 0; i < medalsCount; i++)
		medals[i] = other->getMedal(i);
}

const char* Colonel::getRank() const
{
	return "COL";
}

Soldier* Colonel::clone() const
{
	return new Colonel(*this);
}

bool Colonel::command(const Soldier* soldier) const
{
	if (strcmp(soldier->getRank(), "COL") == 0 || strcmp(soldier->getRank(), "GEN") == 0)
		return false;
	std::cout << "COL " << name << " is giving " << soldier->getRank() << " " << soldier->getName() << " an order." << std::endl;
	return true;
}

void Colonel::writeReport() const
{
	std::cout << "COL " << name << " is writing a report." << std::endl;
}
