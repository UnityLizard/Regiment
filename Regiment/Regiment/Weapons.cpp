#include "Weapons.h"

const float Weapons::getWeight() const
{
	return weight;
}

const float Weapons::getCaliber() const
{
	return caliber;
}

const WeaponType Weapons::getType() const
{
	return type;
}

const Condition Weapons::getCondition() const
{
	return condition;
}

void Weapons::fix()
{
	if (condition != Condition::Perfect)
	{
		condition = Condition::Perfect;
	}
}
