#include "Colonel.h"

Colonel::Colonel(const Soldier* other)
{
	name = other->getName();
	age = other->getAge();
	active = other->isActive();
	rank = Rank::Colonel;
	specialization = other->getSpecialization();
	medalsCount = other->getMedalsCount();
	for (size_t i = 0; i < medalsCount; i++)
		medals[i] = other->getMedal(i);
}

Soldier* Colonel::clone() const
{
	return new Colonel(*this);
}

bool Colonel::command(const Soldier* soldier) const
{
	if (soldier->getRank() >= rank)
		return false;
	rankDisplay();
	std::cout << " " << name << " is giving ";
	soldier->rankDisplay();
	std::cout << " " << soldier->getName() << " an order." << std::endl;
	return true;
}

void Colonel::writeReport() const
{
	rankDisplay();
	std::cout << " " << name << " is writing a report." << std::endl;
}
