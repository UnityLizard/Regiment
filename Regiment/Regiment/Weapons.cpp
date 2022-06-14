#include "Weapons.h"

float Weapons::getWeight() const
{
	return this->weight;
}

Condition Weapons::getCondition() const
{
	return condition;
}

void Weapons::fix()
{
	if (condition != Condition::Perfect)
	{
		condition = Condition::Perfect;
	}
	else
	{
		std::cout << "Weapon does not need fixing - it is in perfect condition!" << std::endl;
	}
}
