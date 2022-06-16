#include "Captain.h"

Captain::Captain(const Soldier* other)
{
	name = other->getName();
	age = other->getAge();
	active = other->isActive();
	rank = Rank::Captain;
	specialization = other->getSpecialization();
	medalsCount = other->getMedalsCount();
	for (size_t i = 0; i < medalsCount; i++)
		medals[i] = other->getMedal(i);
}

Soldier* Captain::clone() const
{
	return new Captain(*this);
}

bool Captain::command(const Soldier* soldier) const
{
	if (soldier->getRank() >= rank)
		return false;
	rankDisplay();
	std::cout << " " << name << " is giving ";
	soldier->rankDisplay();
	std::cout << " " << soldier->getName() << " an order." << std::endl;
	return true;
}
