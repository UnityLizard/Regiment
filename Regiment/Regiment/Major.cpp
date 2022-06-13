#include "Major.h"

Major::Major(const Soldier* other)
{
	name = other->getName();
	age = other->getAge();
	active = other->isActive();
	specialization = other->getSpecialization();
	medalsCount = other->getMedalsCount();
	for (size_t i = 0; i < medalsCount; i++)
		medals[i] = other->getMedal(i);
}

String Major::getRank() const
{
	return "MAJ";
}

Soldier* Major::clone() const
{
	return new Major(*this);
}

bool Major::command(const Soldier* soldier) const
{
	if (strcmp(soldier->getRank().c_str(), "MAJ") == 0 || strcmp(soldier->getRank().c_str(), "COL") == 0
		|| strcmp(soldier->getRank().c_str(), "GEN") == 0)
		return false;
	std::cout << "MAJ " << name << " is giving " << soldier->getRank() << " " << soldier->getName() << " an order." << std::endl;
	return true;
}

void Major::writeReport() const
{
	std::cout << "MAJ " << name << " is writing a report." << std::endl;
}
