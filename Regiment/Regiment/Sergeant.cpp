#include "Sergeant.h"

Sergeant::Sergeant(const Soldier* other, const Specialization spec)
{
	name = other->getName();
	age = other->getAge();
	active = other->isActive();
	rank = Rank::Sergeant;
	specialization = spec;
	medalsCount = other->getMedalsCount();
	for (size_t i = 0; i < medalsCount; i++)
		medals[i] = other->getMedal(i);
}

Soldier* Sergeant::clone() const
{
	return new Sergeant(*this);
}

bool Sergeant::command(const Soldier* soldier) const
{
	if (soldier->getRank() >= rank)
		return false;
	rankDisplay();
	std::cout << " " << name << " is giving ";
	soldier->rankDisplay();
	std::cout << " " << soldier->getName() << " an order." << std::endl;
	return true;
}
