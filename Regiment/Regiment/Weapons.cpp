#include "Weapons.h"

float Weapons::getCaliber() const
{
	return this->caliber;
}

Condition Weapons::getCondition() const
{
	return condition;
}

WeaponType Weapons::getType() const
{
	return type;
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
