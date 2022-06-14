#include "Captain.h"

Captain::Captain(const Soldier* other)
{
	name = other->getName();
	age = other->getAge();
	active = other->isActive();
	specialization = other->getSpecialization();
	medalsCount = other->getMedalsCount();
	for (size_t i = 0; i < medalsCount; i++)
		medals[i] = other->getMedal(i);
}

const char* Captain::getRank() const
{
	return "CPT";
}

Soldier* Captain::clone() const
{
	return new Captain(*this);
}

bool Captain::command(const Soldier* soldier) const
{
	if (strcmp(soldier->getRank(), "CPT") == 0 || strcmp(soldier->getRank(), "MAJ") == 0
		|| strcmp(soldier->getRank(), "COL") == 0 || strcmp(soldier->getRank(), "GEN") == 0)
		return false;
	std::cout << "CPT " << name << " is giving " << soldier->getRank() << " " << soldier->getName() << " an order." << std::endl;
	return true;
}
