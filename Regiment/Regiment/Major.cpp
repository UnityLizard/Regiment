#include "Major.h"

Major::Major(const Soldier* other)
{
	name = other->getName();
	age = other->getAge();
	active = other->isActive();
	rank = Rank::Major;
	specialization = other->getSpecialization();
	medalsCount = other->getMedalsCount();
	for (size_t i = 0; i < medalsCount; i++)
		medals[i] = other->getMedal(i);
}

Soldier* Major::clone() const
{
	return new Major(*this);
}

bool Major::command(const Soldier* soldier) const
{
	if (soldier->getRank() >= rank)
		return false;
	rankDisplay();
	std::cout << " " << name << " is giving ";
	soldier->rankDisplay();
	std::cout << " " << soldier->getName() << " an order." << std::endl;
	return true;
}

void Major::writeReport() const
{
	rankDisplay();
	std::cout << " " << name << " is writing a report." << std::endl;
}
