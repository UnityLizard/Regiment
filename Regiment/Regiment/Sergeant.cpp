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

const char* Sergeant::getRank() const
{
	return "SGT";
}

Soldier* Sergeant::clone() const
{
	return new Sergeant(*this);
}

bool Sergeant::command(const Soldier* soldier) const
{
	if (strcmp(soldier->getRank(), "SGT") == 0 || strcmp(soldier->getRank(), "LT") == 0
		|| strcmp(soldier->getRank(), "CPT") == 0 || strcmp(soldier->getRank(), "MAJ") == 0
		|| strcmp(soldier->getRank(), "COL") == 0 || strcmp(soldier->getRank(), "GEN") == 0)
		return false;
	std::cout << "SGT " << name << " is giving " << soldier->getRank() << " " << soldier->getName() << " an order." << std::endl;
	return true;
}
