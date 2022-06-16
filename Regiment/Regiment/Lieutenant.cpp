#include "Lieutenant.h"

Lieutenant::Lieutenant(const Soldier* other)
{
	name = other->getName();
	age = other->getAge();
	active = other->isActive();
	rank = Rank::Lieutenant;
	specialization = other->getSpecialization();
	medalsCount = other->getMedalsCount();
	for (size_t i = 0; i < medalsCount; i++)
		medals[i] = other->getMedal(i);
}

Soldier* Lieutenant::clone() const
{
	return new Lieutenant(*this);
}

bool Lieutenant::command(const Soldier* soldier) const
{
	if (soldier->getRank() >= rank)
		return false;
	rankDisplay();
	std::cout << " " << name << " is giving ";
	soldier->rankDisplay();
	std::cout << " " << soldier->getName() << " an order." << std::endl;
	return true;
}
