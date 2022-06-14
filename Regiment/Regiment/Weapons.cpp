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
	if (condition != Perfect)
	{
		condition = Perfect;
	}
	else
	{
		std::cout << "Weapon does not need fixing - it is in perfect condition!" << std::endl;
	}
}
