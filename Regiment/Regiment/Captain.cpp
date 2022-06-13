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

String Captain::getRank() const
{
	return "CPT";
}

bool Captain::command(const Soldier* soldier) const
{
	if (strcmp(soldier->getRank().c_str(), "CPT") == 0 || strcmp(soldier->getRank().c_str(), "MAJ") == 0
		|| strcmp(soldier->getRank().c_str(), "COL") == 0 || strcmp(soldier->getRank().c_str(), "GEN") == 0)
		return false;
	std::cout << "CPT " << name << " is giving " << soldier->getRank() << " " << soldier->getName() << " an order." << std::endl;
	return true;
}
