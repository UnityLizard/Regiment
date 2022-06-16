#include "Corporal.h"

Corporal::Corporal(const Soldier* other)
{
	name = other->getName();
	age = other->getAge();
	active = other->isActive();
	rank = Rank::Corporal;
	specialization = other->getSpecialization();
	medalsCount = other->getMedalsCount();
	for (size_t i = 0; i < medalsCount; i++)
		medals[i] = other->getMedal(i);
}

Soldier* Corporal::clone() const
{
	return new Corporal(*this);
}

void Corporal::patrol() const
{
	rankDisplay();
	std::cout << " " << name << " is patrolling." << std::endl << std::endl;
}
