#include "Sergeant.h"

Sergeant::Sergeant(const Soldier* other, const Specializations spec)
{
	name = other->getName();
	age = other->getAge();
	active = other->isActive();
	specialization = spec;
	medalsCount = other->getMedalsCount();
	for (size_t i = 0; i < medalsCount; i++)
		medals[i] = other->getMedal(i);
}

String Sergeant::getRank() const
{
	return "SGT";
}

bool Sergeant::command(const Soldier* soldier) const
{
	if (strcmp(soldier->getRank().c_str(), "SGT") == 0 || strcmp(soldier->getRank().c_str(), "LT") == 0
		|| strcmp(soldier->getRank().c_str(), "CPT") == 0 || strcmp(soldier->getRank().c_str(), "MAJ") == 0
		|| strcmp(soldier->getRank().c_str(), "COL") == 0 || strcmp(soldier->getRank().c_str(), "GEN") == 0)
		return false;
	std::cout << "SGT " << name << " is giving " << soldier->getRank() << " " << soldier->getName() << " an order." << std::endl;
	return true;
}
