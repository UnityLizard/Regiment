#pragma once

#include "Condition.h"
#include "WeaponType.h"

class Weapons
{
protected:
	float weight;
	float caliber;
	WeaponType type;
	Condition condition;
public:
	const float getWeight() const;
	const float getCaliber() const;
	const WeaponType getType() const;
	const Condition getCondition() const;

	virtual Weapons* clone() const = 0;

	void fix();
	virtual void restockAmmo() = 0;
};
