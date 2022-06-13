#include "General.h"

General::General(const Soldier* other)
{
	name = other->getName();
	age = other->getAge();
	active = other->isActive();
	specialization = other->getSpecialization();
	medalsCount = other->getMedalsCount();
	for (size_t i = 0; i < medalsCount; i++)
		medals[i] = other->getMedal(i);
}

String General::getRank() const
{
	return "GEN";
}

bool General::command(const Soldier* soldier) const
{
	if (strcmp(soldier->getRank().c_str(), "GEN") == 0)
		return false;
	std::cout << "GEN " << name << " is giving " << soldier->getRank() << " " << soldier->getName() << " an order." << std::endl;
	return true;
}

void General::writeReport() const
{
	std::cout << "GEN " << name << " is writing a report." << std::endl;
}
