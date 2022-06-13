#include "Lieutenant.h"

Lieutenant::Lieutenant(const Soldier* other)
{
	name = other->getName();
	age = other->getAge();
	active = other->isActive();
	specialization = other->getSpecialization();
	medalsCount = other->getMedalsCount();
	for (size_t i = 0; i < medalsCount; i++)
		medals[i] = other->getMedal(i);
}

String Lieutenant::getRank() const
{
	return "LT";
}

bool Lieutenant::command(const Soldier* soldier) const
{
	if (strcmp(soldier->getRank().c_str(), "LT") == 0 || strcmp(soldier->getRank().c_str(), "CPT") == 0
		|| strcmp(soldier->getRank().c_str(), "MAJ") == 0 || strcmp(soldier->getRank().c_str(), "COL") == 0
		|| strcmp(soldier->getRank().c_str(), "GEN") == 0)
		return false;
	std::cout << "LT " << name << " is giving " << soldier->getRank() << " " << soldier->getName() << " an order." << std::endl;
	return true;
}
